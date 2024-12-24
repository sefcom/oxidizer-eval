ulong __rustcall uu_yes::splice::splice_data(ulong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int local_e8;
  undefined4 local_e4;
  ulong local_e0;
  int local_d8;
  int local_d4;
  int *local_d0;
  ulong local_c8;
  int *local_c0;
  uint local_a8;
  
  nix::sys::stat::fstat(&local_c8,*param_3);
  if ((int)local_c8 != 0) {
LAB_001a65f6:
    return local_c8 & 0xffffffff00000000 | 2;
  }
  local_e0 = param_1;
  if ((local_a8 & 0x1000) == 0) {
    local_c8 = uucore::features::pipes::pipe();
    local_e8 = (int)local_c8;
    if (local_e8 == -1) goto LAB_001a65f6;
    local_e4 = (undefined4)(local_c8 >> 0x20);
    piVar5 = param_2;
    if (param_2 == (int *)0x0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    while( true ) {
                    /* try { // try from 001a665a to 001a6693 has its CatchHandler @ 001a6790 */
      local_c8 = param_1;
      local_c0 = piVar5;
      nix::fcntl::vmsplice(&local_d8,&local_e4,&local_c8,1,0);
      piVar4 = local_d0;
      iVar1 = local_d4;
      if ((local_d8 != 0) ||
         (iVar1 = uucore::features::pipes::splice_exact(&local_e8,param_3,local_d0), iVar1 != 0x86))
      {
        uVar3 = core::ops::function::FnOnce::call_once(iVar1);
        core::ptr::drop_in_place<std::fs::File>(local_e4);
        core::ptr::drop_in_place<std::fs::File>(local_e8);
        return uVar3;
      }
      if (piVar5 < piVar4) break;
      piVar5 = (int *)((long)piVar5 - (long)piVar4);
      param_1 = param_1 + (long)piVar4;
      if (piVar5 == (int *)0x0) {
        piVar5 = param_2;
        param_1 = local_e0;
      }
    }
  }
  else {
    if (param_2 == (int *)0x0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    piVar5 = &local_d8;
    piVar4 = param_2;
    while( true ) {
      local_c8 = param_1;
      local_c0 = piVar4;
      nix::fcntl::vmsplice(piVar5,param_3,&local_c8,1,0);
      if (local_d8 != 0) {
        uVar3 = core::ops::function::FnOnce::call_once(local_d4);
        return uVar3;
      }
      if (piVar4 < local_d0) break;
      param_1 = param_1 + (long)local_d0;
      piVar4 = (int *)((long)piVar4 - (long)local_d0);
      if (piVar4 == (int *)0x0) {
        piVar4 = param_2;
        param_1 = local_e0;
      }
    }
    core::slice::index::slice_start_index_len_fail
              (local_d0,piVar4,&PTR_s_src_uu_yes_src_splice_rs_0020a058);
  }
                    /* try { // try from 001a677b to 001a678d has its CatchHandler @ 001a678e */
  uVar2 = core::slice::index::slice_start_index_len_fail
                    (piVar4,piVar5,&PTR_s_src_uu_yes_src_splice_rs_0020a040);
                    /* catch() { ... } // from try @ 001a677b with catch @ 001a678e */
                    /* catch() { ... } // from try @ 001a665a with catch @ 001a6790 */
  core::ptr::drop_in_place<std::fs::File>(local_e4);
  core::ptr::drop_in_place<std::fs::File>(local_e8);
  uVar3 = _Unwind_Resume(uVar2);
  return uVar3;
}