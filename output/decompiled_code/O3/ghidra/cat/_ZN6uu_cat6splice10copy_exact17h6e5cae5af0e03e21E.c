ulong __rustcall uu_cat::splice::copy_exact(undefined4 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_4068;
  undefined **local_4060;
  ulong local_4058;
  undefined8 local_4050;
  undefined8 local_4048;
  undefined8 uStack_4040;
  undefined8 local_4030 [512];
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030[0] = 0;
  (*(code *)PTR_memset_0021d170)(local_4030,0,0x4000);
  if (param_3 != 0) {
    do {
      nix::unistd::read(&local_4060,param_1,local_4030,0x4000);
      uVar3 = local_4058;
      if ((int)local_4060 != 0) {
LAB_001b5033:
        return (ulong)local_4060 >> 0x20;
      }
      local_4068 = local_4058;
      if (local_4058 == 0) {
LAB_001b504e:
        local_4060 = &PTR_s_unexpected_end_of_pipe_002193a8;
        local_4058 = 1;
        local_4050 = 8;
        local_4048 = 0;
        uStack_4040 = 0;
        core::panicking::assert_failed
                  (1,&local_4068,"",&local_4060,&PTR_s_src_uu_cat_src_splice_rs_002193b8);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar4 = 0;
      do {
        uVar2 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                          (uVar4,uVar3,local_4030);
        nix::unistd::write(&local_4060,uVar2);
        if ((int)local_4060 != 0) goto LAB_001b5033;
        if (local_4058 == 0) {
          copy_exact::panic_cold_explicit();
          goto LAB_001b504e;
        }
        uVar4 = uVar4 + local_4058;
      } while (uVar4 < uVar3);
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
  }
  return 0x86;
}