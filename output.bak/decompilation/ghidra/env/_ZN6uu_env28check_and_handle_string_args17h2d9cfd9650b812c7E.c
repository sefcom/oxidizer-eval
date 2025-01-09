void __rustcall
uu_env::check_and_handle_string_args
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined uVar1;
  undefined auVar2 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [32];
  
  local_b0 = 0x8000000000000000;
  local_98 = 0x8000000000000000;
  local_a8 = param_2;
  local_a0 = param_3;
  local_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 001cd9df to 001cda24 has its CatchHandler @ 001cdab5 */
  auVar2 = core::slice::_<impl[T]>::strip_prefix(param_2,param_3,param_4,param_5);
  if (auVar2._0_8_ == 0) {
    uVar1 = 0;
  }
  else {
    if (param_7 != 0) {
      debug_print_args(*(undefined8 *)(param_7 + 8),*(undefined8 *)(param_7 + 0x10));
    }
    parse_args_from_str(&local_80,auVar2._0_8_,auVar2._8_8_);
    if (local_80 == -0x8000000000000000) {
      *param_1 = local_78;
      param_1[1] = local_70;
                    /* try { // try from 001cda40 to 001cda49 has its CatchHandler @ 001cdab0 */
      core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&local_b0);
      goto LAB_001cda94;
    }
    local_68 = local_80;
    local_60 = local_78;
    local_58 = local_70;
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_50,&local_68);
    uVar1 = 1;
                    /* try { // try from 001cda74 to 001cda7e has its CatchHandler @ 001cdab5 */
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend
              (param_6,local_50);
  }
  *(undefined *)(param_1 + 1) = uVar1;
  *param_1 = 0;
                    /* try { // try from 001cda8a to 001cda93 has its CatchHandler @ 001cdab0 */
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&local_b0);
LAB_001cda94:
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&local_98);
  return;
}