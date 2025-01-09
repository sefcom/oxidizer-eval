void __rustcall uu_paste::parse_delimiters(undefined8 *param_1,long param_2,long param_3)

{
  undefined uVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_EDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined auVar4 [16];
  undefined4 local_bc;
  undefined **local_b8;
  undefined **ppuStack_b0;
  long **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  code *local_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_bc = 0;
  local_58 = param_2;
  local_50 = param_3;
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_b8,param_3,0);
  if (local_b8 != (undefined **)0x0) {
    uVar3 = ::alloc::raw_vec::handle_error(ppuStack_b0,local_a8);
                    /* catch() { ... } // from try @ 001ac403 with catch @ 001ac47b */
                    /* catch() { ... } // from try @ 001ac310 with catch @ 001ac47d */
                    /* try { // try from 001ac480 to 001ac489 has its CatchHandler @ 001ac492 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<[u8]>>>(&local_80);
    _Unwind_Resume(uVar3);
    return;
  }
  local_80 = ppuStack_b0;
  uStack_78 = local_a8;
  local_70 = 0;
  local_60 = param_3 + param_2;
  local_68 = param_2;
  iVar2 = core::str::validations::next_code_point(&local_68);
  if (iVar2 != 0) {
    uVar3 = extraout_RDX;
    do {
      if ((int)uVar3 == 0x5c) {
        iVar2 = core::str::validations::next_code_point(&local_68);
        if (iVar2 == 0) {
          local_48 = &local_58;
          local_40 = _<&T_as_core::fmt::Display>::fmt;
          local_b8 = &PTR_s_delimiter_list_ends_with_an_unes_00213558;
          ppuStack_b0 = (undefined **)0x1;
          local_98 = 0;
          local_a8 = &local_48;
          local_a0 = 1;
                    /* try { // try from 001ac403 to 001ac440 has its CatchHandler @ 001ac47b */
          core::option::Option<T>::map_or_else(local_38,&local_b8);
          local_a0 = CONCAT44(local_a0._4_4_,1);
          local_a8 = (long **)local_28;
          uVar3 = ::alloc::boxed::Box<T>::new(&local_b8);
          param_1[1] = uVar3;
          param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002135a0;
          *param_1 = 1;
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<[u8]>>>(&local_80);
          return;
        }
        if (extraout_EDX < 0x6e) {
          if (extraout_EDX == 0x30) {
            uVar3 = ::alloc::boxed::Box<T>::new();
            ::alloc::vec::Vec<T,A>::push(&local_80,uVar3,0);
            goto LAB_001ac31b;
          }
          uVar1 = 0x5c;
          if (extraout_EDX != 0x5c) goto LAB_001ac310;
        }
        else if (extraout_EDX == 0x6e) {
          uVar1 = 10;
        }
        else {
          if (extraout_EDX != 0x74) goto LAB_001ac310;
          uVar1 = 9;
        }
        parse_delimiters::add_one_byte_single_char_delimiter(&local_80,uVar1);
      }
      else {
LAB_001ac310:
                    /* try { // try from 001ac310 to 001ac37e has its CatchHandler @ 001ac47d */
        parse_delimiters::___closure__(&local_bc,&local_80);
      }
LAB_001ac31b:
      iVar2 = core::str::validations::next_code_point(&local_68);
      uVar3 = extraout_RDX_00;
    } while (iVar2 != 0);
  }
  local_a8 = (long **)local_70;
  local_b8 = local_80;
  ppuStack_b0 = (undefined **)uStack_78;
  auVar4 = ::alloc::vec::Vec<T,A>::into_boxed_slice(&local_b8);
  *(undefined (*) [16])(param_1 + 1) = auVar4;
  *param_1 = 0;
  return;
}