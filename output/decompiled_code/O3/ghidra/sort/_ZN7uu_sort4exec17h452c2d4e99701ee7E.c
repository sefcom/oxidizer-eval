undefined8 __rustcall
uu_sort::exec(long param_1,ulong param_2,long param_3,long *param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined local_78 [16];
  undefined8 local_68;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  if (*(char *)(param_3 + 0x81) == '\0') {
    if (*(char *)(param_3 + 0x85) == '\0') {
      uStack_e8 = param_1 + param_2 * 0x18;
      local_d8 = *(undefined4 *)param_4;
      uStack_d4 = *(undefined4 *)((long)param_4 + 4);
      uStack_d0 = *(undefined4 *)(param_4 + 1);
      uStack_cc = *(undefined4 *)((long)param_4 + 0xc);
      local_c8 = param_4[2];
      uStack_c0 = *(undefined4 *)(param_4 + 3);
      uStack_bc = *(undefined4 *)((long)param_4 + 0x1c);
      local_f0 = param_1;
      uVar2 = ext_sort::ext_sort(&local_f0,param_3,&local_d8,param_5);
    }
    else {
      if (param_2 < 2) {
        if (param_2 != 1) {
                    /* try { // try from 00222c00 to 00222c0c has its CatchHandler @ 00222c0d */
          uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ff1d8);
                    /* catch() { ... } // from try @ 00222a83 with catch @ 00222c0d
                       catch() { ... } // from try @ 00222bd7 with catch @ 00222c0d
                       catch() { ... } // from try @ 00222c00 with catch @ 00222c0d */
                    /* try { // try from 00222c10 to 00222c17 has its CatchHandler @ 00222c20 */
          core::ptr::drop_in_place<uu_sort::Output>(param_4);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar2);
        }
                    /* try { // try from 00222bd7 to 00222bde has its CatchHandler @ 00222c0d */
        uVar2 = check::check(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_3);
      }
      else {
                    /* try { // try from 00222a83 to 00222ae3 has its CatchHandler @ 00222c0d */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                  (&local_f0,"only one file allowed with -c",0x1d);
        local_c8 = local_e0;
        local_d8 = (undefined4)local_f0;
        uStack_d4 = local_f0._4_4_;
        uStack_d0 = (undefined4)uStack_e8;
        uStack_cc = uStack_e8._4_4_;
        uStack_c0 = 2;
        uVar2 = ::alloc::boxed::Box<T>::new(&local_d8);
      }
      core::ptr::drop_in_place<uu_sort::Output>(param_4);
    }
  }
  else {
    if (*param_4 == -0x8000000000000000) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_4[1];
    }
    merge::merge(&local_d8,param_1,param_2,param_3,lVar1,param_4[2],param_5);
    uVar2 = CONCAT44(uStack_cc,uStack_d0);
    if (CONCAT44(uStack_d4,local_d8) == 3) {
      core::ptr::drop_in_place<uu_sort::Output>(param_4);
    }
    else {
      local_20 = local_80;
      local_30 = local_90;
      uStack_2c = uStack_8c;
      uStack_28 = uStack_88;
      uStack_24 = uStack_84;
      local_40 = local_a0;
      uStack_3c = uStack_9c;
      uStack_38 = uStack_98;
      uStack_34 = uStack_94;
      local_50 = local_b0;
      uStack_48 = uStack_a8;
      uStack_58 = uStack_b8;
      local_68 = local_c8;
      local_d8 = *(undefined4 *)param_4;
      uStack_d4 = *(undefined4 *)((long)param_4 + 4);
      uStack_d0 = *(undefined4 *)(param_4 + 1);
      uStack_cc = *(undefined4 *)((long)param_4 + 0xc);
      local_c8 = param_4[2];
      uStack_c0 = *(undefined4 *)(param_4 + 3);
      uStack_bc = *(undefined4 *)((long)param_4 + 0x1c);
      uVar2 = merge::FileMerger::write_all(local_78,param_3,&local_d8);
    }
  }
  return uVar2;
}