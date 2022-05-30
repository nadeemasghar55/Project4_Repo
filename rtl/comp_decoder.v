
`include "opcode.vh"

module comp_decoder (
    input [31:0] ins,
    output [31:0] ins_out,
    
    output compressed_ins,
    output illegal_com_ins
    
    );


always @(*) 
begin
    

// For normal 32 bit instructions
if(ins[1:0]==2'b11)
begin
    illegal_ins = 1'b0;
    ins_out = ins;
    compressed_ins = 1'b0;
end

// For compressed instructions

// For first Case Opcode = 0
else if (ins[1:0]==2'b00)
begin
    illegal_com_ins = 1'b0;
    compressed_ins = 1'b1;
    case (ins[15:13])
        000:
        begin
            if(ins[12:5]==8'b0000_0000)   //Illegal Instruction
            begin
                illegal_com_ins = 1'b1;
            end
            else
            begin
                ins_out = {2'd0, {ins[10:7]}, {ins[12:11]}, {ins[5]}, {ins[6]},2'd0,5'd2,3'd0,2'd1,{ins[4:2]},{OP_ARITHI}}; //C.ADDI_4SPN  => addi rd', x2, imm
            end
                
        end
        001:
        begin
            ins_out = {5'd0, {ins[5]}, {ins[12:10]},{ins[6]},2'd0,2'd1,{ins[9:7]},3'd2,2'd1,{ins[4:2]},{OP_LOAD}};   //C.LW  -> lw rd', imm(rs1')
        end 

        110:
        begin
            ins_out = {5'd0, {ins[5]}, {ins[12]},{2'd1,{ins[4:2]}},{2'd1,{ins[9:7]}},3'd6,{ins_c[11:10]},{ind_c[6]},2'd0,{OP_STORE}}   //C.SW   -> sw rs2', imm(rs1')
        end 
        001:;
        011:;
        101:;
        111: begin
            illegal_com_ins = 1'b1;
        end
        default: illegal_com_ins = 1'b1;
    endcase

end

