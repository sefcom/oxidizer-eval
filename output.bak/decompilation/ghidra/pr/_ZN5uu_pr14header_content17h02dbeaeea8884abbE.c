void __rustcall uu_pr::header_content(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long local_68;
  code *local_60;
  long local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = (undefined *)&local_88;
  if (*(char *)(param_2 + 0x141) == '\0') {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    local_68 = param_2 + 0x78;
    local_58 = param_2 + 0x30;
    local_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_50 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_40 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_38 = &DAT_00409590;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_68;
    local_20 = 3;
    local_88 = param_3;
    core::option::Option<T>::map_or_else(&local_80,&local_38);
    puVar1 = (undefined8 *)::alloc::alloc::Global::alloc_impl(8,0x78);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 002c8a09 to 002c8a18 has its CatchHandler @ 002c8a19 */
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(8,0x78);
    }
    *puVar1 = 0;
    puVar1[1] = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = local_80;
    *(undefined4 *)((long)puVar1 + 0x34) = uStack_7c;
    *(undefined4 *)(puVar1 + 7) = uStack_78;
    *(undefined4 *)((long)puVar1 + 0x3c) = uStack_74;
    puVar1[8] = local_70;
    puVar1[9] = 0;
    puVar1[10] = 1;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 1;
    puVar1[0xe] = 0;
    ::alloc::slice::hack::into_vec(param_1,puVar1,5);
  }
  return;
}