/* WARNING: Type propagation algorithm not settling */

void __rustcall
uu_pr::get_formatted_line_number(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 **local_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  code *local_120;
  long *local_118;
  code *local_110;
  ulong local_108;
  undefined8 local_100;
  long local_f8 [3];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined local_68 [16];
  undefined4 local_58 [6];
  undefined4 local_40 [6];
  
  if (*(long *)(param_2 + 0xd8) != -0x8000000000000000) {
    if (*(long *)(param_2 + 0x10) == 0) {
      if (param_3 != 0) goto LAB_002c85ec;
    }
    else if ((param_3 != 0) && (param_4 == 0)) {
LAB_002c85ec:
      local_f8[0] = param_3;
      _<T_as_alloc::string::ToString>::to_string(&local_80,local_f8);
      local_108 = *(ulong *)(param_2 + 0xf0);
      local_160 = param_2 + 0xd8;
      if (local_70 < local_108) {
        local_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_118 = &local_160;
        local_110 = _<&T_as_core::fmt::Display>::fmt;
        local_100 = 0;
        local_f8[1] = 2;
        local_e0 = 1;
        local_d8 = 2;
        local_d0 = 0;
        local_c8 = 0x20;
        local_c0 = 1;
        local_b8 = 2;
        local_a8 = 2;
        local_98 = 1;
        local_90 = 0x20;
        local_88 = 3;
        local_158 = &DAT_0016bf10;
        local_150 = 2;
        local_138 = local_f8 + 1;
        local_130 = 2;
        local_148 = &local_128;
        local_140 = 3;
                    /* try { // try from 002c871a to 002c8868 has its CatchHandler @ 002c88b1 */
        puVar5 = local_40;
        local_128 = &local_80;
        core::option::Option<T>::map_or_else(puVar5,&local_158);
      }
      else {
        local_68 = core::str::traits::
                   _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                   ::get(local_70 - local_108,local_78,local_70);
        if (local_68._0_8_ == 0) {
                    /* try { // try from 002c8898 to 002c88b0 has its CatchHandler @ 002c88b1 */
          uVar4 = core::str::slice_error_fail
                            (local_78,local_70,local_70 - local_108,local_70,
                             &PTR_s_src_uu_pr_src_pr_rs_00409578);
                    /* catch() { ... } // from try @ 002c871a with catch @ 002c88b1
                       catch() { ... } // from try @ 002c8898 with catch @ 002c88b1 */
                    /* try { // try from 002c88b4 to 002c88c0 has its CatchHandler @ 002c88c9 */
          core::ptr::drop_in_place<alloc::string::String>(&local_80);
          _Unwind_Resume(uVar4);
          return;
        }
        local_128 = (undefined8 *)local_68;
        local_120 = _<&T_as_core::fmt::Display>::fmt;
        local_118 = &local_160;
        local_110 = _<&T_as_core::fmt::Display>::fmt;
        local_100 = 0;
        local_f8[1] = 2;
        local_e0 = 1;
        local_d8 = 2;
        local_d0 = 0;
        local_c8 = 0x20;
        local_c0 = 1;
        local_b8 = 2;
        local_a8 = 2;
        local_98 = 1;
        local_90 = 0x20;
        local_88 = 3;
        local_158 = &DAT_0016bf10;
        local_150 = 2;
        local_138 = local_f8 + 1;
        local_130 = 2;
        local_148 = &local_128;
        local_140 = 3;
        puVar5 = local_58;
        core::option::Option<T>::map_or_else(puVar5,&local_158);
      }
      param_1[2] = *(undefined8 *)(puVar5 + 4);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *(undefined4 *)param_1 = *puVar5;
      *(undefined4 *)((long)param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar3;
      core::ptr::drop_in_place<alloc::string::String>(&local_80);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}