undefined  [16]
_ZN11uu_truncate8truncate17hee69817ccf70944aE
          (byte param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5,
          undefined8 param_6)

{
  long *plVar1;
  undefined auVar2 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  long local_28;
  long lStack_20;
  long local_18;
  
  if (*param_3 == -0x8000000000000000) {
    if (*param_4 == -0x8000000000000000) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                ("internal error: entered unreachable code",0x28,
                 &PTR_s_src_uu_truncate_src_truncate_rs_00216740);
    }
    local_48 = *(undefined4 *)param_4;
    uStack_44 = *(undefined4 *)((long)param_4 + 4);
    uStack_40 = *(undefined4 *)(param_4 + 1);
    uStack_3c = *(undefined4 *)((long)param_4 + 0xc);
    local_38 = param_4[2];
                    /* try { // try from 001ae26c to 001ae280 has its CatchHandler @ 001ae369 */
    auVar2 = _ZN11uu_truncate18truncate_size_only17hdbbffa5e97261080E
                       (param_4[1],local_38,param_5,param_6,param_1 ^ 1);
  }
  else {
    if (*param_4 != -0x8000000000000000) {
      local_18 = param_3[2];
      local_28 = *param_3;
      lStack_20 = param_3[1];
      local_48 = *(undefined4 *)param_4;
      uStack_44 = *(undefined4 *)((long)param_4 + 4);
      uStack_40 = *(undefined4 *)(param_4 + 1);
      uStack_3c = *(undefined4 *)((long)param_4 + 0xc);
      local_38 = param_4[2];
                    /* try { // try from 001ae2ec to 001ae2fa has its CatchHandler @ 001ae341 */
      auVar2 = _ZN11uu_truncate27truncate_reference_and_size17h4e3270fcd25f5342E
                         (lStack_20,local_18,param_4[1]);
                    /* try { // try from 001ae2fb to 001ae30a has its CatchHandler @ 001ae33c */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f0eef7059c8ae71E(&local_48);
      plVar1 = &local_28;
      goto LAB_001ae310;
    }
    local_48 = *(undefined4 *)param_3;
    uStack_44 = *(undefined4 *)((long)param_3 + 4);
    uStack_40 = *(undefined4 *)(param_3 + 1);
    uStack_3c = *(undefined4 *)((long)param_3 + 0xc);
    local_38 = param_3[2];
                    /* try { // try from 001ae29e to 001ae2b2 has its CatchHandler @ 001ae35a */
    auVar2 = _ZN11uu_truncate28truncate_reference_file_only17h8a3d13789e4c1f75E
                       (param_3[1],local_38,param_5,param_6,param_1 ^ 1);
  }
  plVar1 = (long *)&local_48;
LAB_001ae310:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f0eef7059c8ae71E(plVar1);
  return auVar2;
}