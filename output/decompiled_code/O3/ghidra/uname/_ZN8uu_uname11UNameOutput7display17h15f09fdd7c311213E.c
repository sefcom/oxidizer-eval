undefined8 * __rustcall uu_uname::UNameOutput::display(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  plVar1 = (long *)0x0;
  local_88 = param_2;
  if (*param_2 == -0x8000000000000000) {
    local_88 = plVar1;
  }
  local_80 = param_2 + 3;
  if (param_2[3] == -0x8000000000000000) {
    local_80 = plVar1;
  }
  local_a8 = 0;
  local_78 = param_2 + 6;
  if (param_2[6] == -0x8000000000000000) {
    local_78 = plVar1;
  }
  local_70 = param_2 + 9;
  if (param_2[9] == -0x8000000000000000) {
    local_70 = plVar1;
  }
  local_68 = param_2 + 0xc;
  if (param_2[0xc] == -0x8000000000000000) {
    local_68 = plVar1;
  }
  uStack_a0 = 1;
  local_60 = param_2 + 0xf;
  if (param_2[0xf] == -0x8000000000000000) {
    local_60 = plVar1;
  }
  local_58 = param_2 + 0x12;
  if (param_2[0x12] == -0x8000000000000000) {
    local_58 = plVar1;
  }
  local_50 = param_2 + 0x15;
  if (param_2[0x15] == -0x8000000000000000) {
    local_50 = plVar1;
  }
  local_98 = 0;
  local_90 = 1;
  local_48 = 0;
  local_40 = 8;
  local_38 = 0;
  local_28 = 0;
  while( true ) {
                    /* try { // try from 001a8760 to 001a878f has its CatchHandler @ 001a87c1 */
    lVar2 = _<core::iter::adapters::flatten::FlattenCompat<I,U>as_core::iter::traits::iterator::Iterator>
            ::next(&local_90);
    if (lVar2 == 0) break;
    uVar3 = core::slice::iter::Iter<T>::make_slice
                      (*(long *)(lVar2 + 8),*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    ::alloc::vec::Vec<T,A>::append_elements(&local_a8,uVar3);
    ::alloc::string::String::push(&local_a8);
  }
                    /* try { // try from 001a8792 to 001a879b has its CatchHandler @ 001a87bc */
  core::ptr::
  drop_in_place<core::iter::adapters::flatten::Flatten<core::array::iter::IntoIter<core::option::Option<&alloc::string::String>,8_usize>>>
            (&local_90);
  param_1[2] = local_98;
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  return param_1;
}