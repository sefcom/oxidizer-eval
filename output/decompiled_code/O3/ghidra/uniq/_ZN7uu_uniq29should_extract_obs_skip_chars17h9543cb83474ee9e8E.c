undefined8 __rustcall
uu_uniq::should_extract_obs_skip_chars(ulong param_1,long param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_RDX;
  uleb128 *puVar5;
  undefined auVar6 [16];
  ulong local_30;
  long local_28;
  
  local_30 = local_30 & 0xffffffff00000000;
  auVar6 = core::char::methods::encode_utf8_raw(0x2b,&local_30);
  cVar1 = core::slice::_<impl[T]>::starts_with(param_1,param_2,auVar6._0_8_,auVar6._8_8_);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    auVar6 = uucore::mods::posix::posix_version();
    uVar4 = 0;
    if ((((auVar6._0_8_ != 0) && (auVar6._8_8_ < 0x30a2a)) && (param_3 == '\0')) &&
       (uVar4 = 0, param_4 == '\0')) {
      local_28 = param_2 + param_1;
      local_30 = param_1;
      lVar3 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::advance_by
                        (&local_30);
      puVar5 = &uleb128_00110000;
      if (lVar3 == 0) {
        iVar2 = core::str::validations::next_code_point(&local_30);
        puVar5 = &uleb128_00110000;
        if (iVar2 != 0) {
          puVar5 = (uleb128 *)(extraout_RDX & 0xffffffff);
        }
      }
      uVar4 = core::option::Option<T>::map_or(puVar5);
    }
  }
  return uVar4;
}