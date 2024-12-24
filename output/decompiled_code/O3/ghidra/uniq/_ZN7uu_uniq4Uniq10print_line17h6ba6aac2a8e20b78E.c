void __rustcall
uu_uniq::Uniq::print_line
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,long param_6
          ,char param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_b8;
  long local_b0;
  undefined local_a8 [8];
  long local_a0;
  long local_98;
  long *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  long **local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined local_50 [32];
  
  uVar3 = 10;
  if (*(char *)(param_1 + 0x35) != '\0') {
    uVar3 = 0;
  }
  local_b0 = param_6;
  if (((param_6 == 1) && (*(byte *)(param_1 + 0x36) != 4)) &&
     ((param_7 != '\0' || ((*(byte *)(param_1 + 0x36) | 2) == 3)))) {
    local_e8 = CONCAT71(local_e8._1_7_,uVar3);
    uVar1 = std::io::impls::_<impl_std::io::Write_for_alloc::boxed::Box<W>>::write_all
                      (param_2,param_3,&local_e8,1);
    lVar2 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
            ::map_err_context(uVar1);
    if (lVar2 != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x33) == '\0') {
    uVar1 = std::io::impls::_<impl_std::io::Write_for_alloc::boxed::Box<W>>::write_all
                      (param_2,param_3,param_4,param_5);
    lVar2 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
            ::map_err_context(uVar1);
  }
  else {
    local_90 = &local_b0;
    local_88 = PTR_fmt_00235378;
    local_e8 = 2;
    local_d8 = 0;
    local_d0 = 7;
    local_c8 = 0;
    local_c0 = 0x20;
    local_b8 = 3;
    local_80 = &DAT_0022e4e8;
    local_78 = 2;
    local_58 = 1;
    local_70 = &local_90;
    local_68 = 1;
    local_60 = (undefined *)&local_e8;
    core::option::Option<T>::map_or_else(local_a8,&local_80);
    core::iter::traits::iterator::Iterator::chain
              (local_50,local_a0,local_98 + local_a0,param_4,param_5 + param_4);
                    /* try { // try from 001706b9 to 001706c3 has its CatchHandler @ 0017075c */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_e8,local_50);
                    /* try { // try from 001706ce to 001706d8 has its CatchHandler @ 0017074f */
    uVar1 = std::io::impls::_<impl_std::io::Write_for_alloc::boxed::Box<W>>::write_all
                      (param_2,param_3,local_e0,local_d8);
                    /* try { // try from 001706d9 to 001706e3 has its CatchHandler @ 0017075c */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_e8);
    core::ptr::drop_in_place<alloc::string::String>(local_a8);
    lVar2 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
            ::map_err_context(uVar1);
  }
  if (lVar2 == 0) {
    local_e8._1_7_ = (undefined7)((ulong)local_e8 >> 8);
    local_e8 = CONCAT71(local_e8._1_7_,uVar3);
    uVar1 = std::io::impls::_<impl_std::io::Write_for_alloc::boxed::Box<W>>::write_all
                      (param_2,param_3,&local_e8,1);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(uVar1);
  }
  return;
}