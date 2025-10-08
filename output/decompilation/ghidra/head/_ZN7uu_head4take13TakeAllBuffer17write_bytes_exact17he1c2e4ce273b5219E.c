void _ZN7uu_head4take13TakeAllBuffer17write_bytes_exact17he1c2e4ce273b5219E
               (long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  
  auVar5 = _ZN7uu_head4take13TakeAllBuffer16remaining_buffer17he80dcc941e66ef3aE();
  uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h081cc4e04b37b8ffE
                    (param_3,auVar5._0_8_,auVar5._8_8_,&PTR_s_src_uu_head_src_take_rs_001f7b00);
  lVar3 = (*(code *)
            PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001fe7f0
          )(param_2,uVar2);
  if ((lVar3 == 0) &&
     (uVar4 = param_3 + *(long *)(param_1 + 0x18), *(ulong *)(param_1 + 0x18) = uVar4,
     *(ulong *)(param_1 + 0x10) < uVar4)) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001fe820)
              ("assertion failed: self.start_index <= self.buffer.len()",0x37,
               &PTR_s_src_uu_head_src_take_rs_001f7b18);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}