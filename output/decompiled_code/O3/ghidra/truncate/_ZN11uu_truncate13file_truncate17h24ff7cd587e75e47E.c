undefined8 __rustcall
uu_truncate::file_truncate(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined8 *local_f8;
  code *local_f0;
  undefined local_e8 [16];
  undefined8 local_d8;
  long local_d0;
  undefined local_c8;
  undefined uStack_c7;
  undefined2 uStack_c6;
  char cStack_c4;
  undefined uStack_c3;
  undefined2 uStack_c2;
  uint local_98;
  
  std::fs::metadata(&local_d0,param_1,param_2);
  if ((local_d0 == 2) || ((local_98 & 0xf000) != 0x1000)) {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_d0,CONCAT26(uStack_c2,
                                 CONCAT15(uStack_c3,
                                          CONCAT14(cStack_c4,
                                                   CONCAT22(uStack_c6,CONCAT11(uStack_c7,local_c8)))
                                         )));
    local_d0 = 0x1b600000000;
    local_c8 = 0;
    uStack_c6 = 0;
    uStack_c3 = 0;
    uStack_c7 = 1;
    cStack_c4 = param_3;
    std::fs::OpenOptions::open(&local_148,&local_d0,param_1,param_2);
    if ((int)local_148 == 0) {
      local_118 = CONCAT44(local_118._4_4_,local_148._4_4_);
                    /* try { // try from 001ada36 to 001ada43 has its CatchHandler @ 001ada6a */
      uVar2 = std::fs::File::set_len(&local_118,param_4);
      core::ptr::drop_in_place<std::fs::File>(local_148._4_4_);
    }
    else {
      cVar1 = std::io::error::Error::kind(uStack_140);
      uVar2 = uStack_140;
      if ((cVar1 == '\0') && (param_3 == '\0')) {
        core::ptr::drop_in_place<std::io::error::Error>(uStack_140);
        uVar2 = 0;
      }
    }
    uVar2 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
            ::map_err_context(uVar2,param_1,param_2);
  }
  else {
    local_118 = 0;
    local_100 = 1;
    local_f8 = &local_118;
    local_f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_148 = &PTR_s_cannot_open_for_writing__No_such_00216bd0;
    uStack_140 = 2;
    local_128 = 0;
    local_138 = &local_f8;
    local_130 = 1;
                    /* try { // try from 001ad95f to 001ad98e has its CatchHandler @ 001ada7c */
    local_110 = param_1;
    local_108 = param_2;
    core::option::Option<T>::map_or_else(local_e8,&local_148);
    local_130 = CONCAT44(local_130._4_4_,1);
    local_138 = (undefined8 **)local_d8;
    uVar2 = ::alloc::boxed::Box<T>::new(&local_148);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_d0,CONCAT26(uStack_c2,
                                 CONCAT15(uStack_c3,
                                          CONCAT14(cStack_c4,
                                                   CONCAT22(uStack_c6,CONCAT11(uStack_c7,local_c8)))
                                         )));
  }
  return uVar2;
}