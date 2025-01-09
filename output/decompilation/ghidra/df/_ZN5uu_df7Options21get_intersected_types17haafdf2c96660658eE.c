void __rustcall
uu_df::Options::get_intersected_types
          (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 *local_48;
  long local_40;
  long local_38;
  
  local_80 = 0;
  uStack_78 = 8;
  local_70 = 0;
  local_38 = param_2 + param_3 * 0x18;
  local_40 = param_2;
  lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_40);
  if (lVar2 == 0) {
    local_68 = (undefined4)local_80;
    uStack_64 = local_80._4_4_;
    uStack_60 = (undefined4)uStack_78;
    uStack_5c = uStack_78._4_4_;
  }
  else {
    local_48 = param_1;
    do {
                    /* try { // try from 001c66b0 to 001c66d8 has its CatchHandler @ 001c674a */
      cVar1 = _<T_as_core::slice::cmp::SliceContains>::slice_contains(lVar2,param_4,param_5);
      if (cVar1 != '\0') {
        _<alloc::string::String_as_core::clone::Clone>::clone(&local_68,lVar2);
        ::alloc::vec::Vec<T,A>::push(&local_80,&local_68);
      }
      lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_40);
    } while (lVar2 != 0);
    local_68 = (undefined4)local_80;
    uStack_64 = local_80._4_4_;
    uStack_60 = (undefined4)uStack_78;
    uStack_5c = uStack_78._4_4_;
    param_1 = local_48;
    if (local_70 != 0) {
      local_48[2] = local_70;
      *local_48 = local_80;
      local_48[1] = uStack_78;
      return;
    }
  }
  *param_1 = 0x8000000000000000;
  local_58 = local_70;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_68);
  return;
}