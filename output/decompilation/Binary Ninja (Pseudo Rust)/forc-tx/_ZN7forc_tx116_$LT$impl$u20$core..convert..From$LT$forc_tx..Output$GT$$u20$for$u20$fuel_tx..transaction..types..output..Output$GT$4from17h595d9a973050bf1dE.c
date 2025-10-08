
  fn forc_tx::_$LT$impl$u20$core..convert..From$LT$forc_tx..Output$GT$$u20$for$u20$fuel_tx..transaction..types..output..Output$GT$::from::h595d9a973050bf1d(arg1: *mut i8, arg2: *mut i8) -> *mut c_void

{
    let rax_1: *mut c_void = jump_table_4aa6f4[*arg2] + &jump_table_4aa6f4;
    let mut zmm0: i128;
    let mut zmm1: i128;
    
    match rax_1
    {
        0x52b283 =>
        {
            zmm0 = *arg2.byte_offset(8);
            *arg1.byte_offset(0x20) = *arg2.byte_offset(0x18);
            *arg1.byte_offset(0x10) = zmm0;
            let rax_2: i64 = *arg2.byte_offset(0x48);
            zmm1 = *arg2.byte_offset(0x38);
            *arg1.byte_offset(0x30) = *arg2.byte_offset(0x28);
            *arg1.byte_offset(0x40) = zmm1;
            *arg1.byte_offset(8) = rax_2;
            *arg1 = 0;
            rax_2
        }
        0x52b2af =>
        {
            zmm0 = *arg2.byte_offset(1);
            *arg1.byte_offset(0x11) = *arg2.byte_offset(0x11);
            *arg1.byte_offset(1) = zmm0;
            zmm1 = *arg2.byte_offset(0x31);
            *arg1.byte_offset(0x21) = *arg2.byte_offset(0x21);
            *arg1.byte_offset(0x31) = zmm1;
            *arg1 = 4;
            rax_1
        }
        0x52b2d3 =>
        {
            zmm0 = *arg2.byte_offset(8);
            *arg1.byte_offset(0x20) = *arg2.byte_offset(0x18);
            *arg1.byte_offset(0x10) = zmm0;
            let rax_3: i64 = *arg2.byte_offset(0x48);
            zmm1 = *arg2.byte_offset(0x38);
            *arg1.byte_offset(0x30) = *arg2.byte_offset(0x28);
            *arg1.byte_offset(0x40) = zmm1;
            *arg1.byte_offset(8) = rax_3;
            *arg1 = 2;
            rax_3
        }
        0x52b2ff =>
        {
            zmm0 = *arg2.byte_offset(8);
            *arg1.byte_offset(0x20) = *arg2.byte_offset(0x18);
            *arg1.byte_offset(0x10) = zmm0;
            let rax_4: i64 = *arg2.byte_offset(0x48);
            zmm1 = *arg2.byte_offset(0x38);
            *arg1.byte_offset(0x30) = *arg2.byte_offset(0x28);
            *arg1.byte_offset(0x40) = zmm1;
            *arg1.byte_offset(8) = rax_4;
            *arg1 = 3;
            rax_4
        }
        0x52b32b =>
        {
            let rax_5: i16 = *arg2.byte_offset(0x42);
            zmm0 = *arg2.byte_offset(2);
            zmm1 = *arg2.byte_offset(0x12);
            let var_38: i128 = zmm1;
            let var_48: i128 = zmm0;
            let zmm2: i128 = *arg2.byte_offset(0x22);
            let zmm3: i128 = *arg2.byte_offset(0x32);
            let var_28: i128 = zmm2;
            let var_18: i128 = zmm3;
            *arg1.byte_offset(0x32) = zmm3;
            *arg1.byte_offset(0x22) = zmm2;
            *arg1.byte_offset(0x12) = zmm1;
            *arg1.byte_offset(2) = zmm0;
            *arg1.byte_offset(0x42) = rax_5;
            *arg1 = 1;
            rax_5
        }
    }
}
