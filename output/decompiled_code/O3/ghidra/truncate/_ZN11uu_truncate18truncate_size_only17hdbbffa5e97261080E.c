long __rustcall
uu_truncate::truncate_size_only
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_140;
  long local_138;
  undefined8 *local_130;
  code *local_128;
  undefined local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined local_f0;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_b0;
  undefined8 local_98;
  
  parse_mode_and_size(&local_178,param_1,param_2);
  if ((int)local_178 == 3) {
    if (((uStack_170 == 5) || ((int)uStack_170 == 6)) && (local_168 == (undefined8 **)0x0)) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_e8,&DAT_00113bb0,0x10);
      uStack_d0 = 1;
      lVar2 = ::alloc::boxed::Box<T>::new(&local_e8);
    }
    else {
      local_138 = param_3 + param_4 * 0x18;
      local_140 = param_3;
      do {
        lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_140);
        if (lVar2 == 0) {
          return 0;
        }
        std::fs::metadata(&local_e8,lVar2);
        if (CONCAT44(uStack_e4,local_e8) == 2) {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                    (2,CONCAT44(uStack_dc,iStack_e0));
          uVar1 = 0;
        }
        else {
          uVar1 = local_98;
          if ((local_b0 & 0xf000) == 0x1000) {
            local_100 = *(undefined4 *)(lVar2 + 8);
            uStack_fc = *(undefined4 *)(lVar2 + 0xc);
            uStack_f8 = *(undefined4 *)(lVar2 + 0x10);
            uStack_f4 = *(undefined4 *)(lVar2 + 0x14);
            local_108 = 0;
            local_f0 = 1;
            local_130 = &local_108;
            local_128 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_178 = &PTR_s_cannot_open_for_writing__No_such_002165a0;
            uStack_170 = 2;
            local_158 = 0;
            local_168 = &local_130;
            uStack_160 = 1;
                    /* try { // try from 001ae113 to 001ae142 has its CatchHandler @ 001ae15b */
            core::option::Option<T>::map_or_else(local_120,&local_178);
            uStack_160 = CONCAT44(uStack_160._4_4_,1);
            local_168 = (undefined8 **)local_110;
            lVar2 = ::alloc::boxed::Box<T>::new(&local_178);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                      (CONCAT44(uStack_e4,local_e8),CONCAT44(uStack_dc,iStack_e0));
            return lVar2;
          }
        }
        uVar1 = TruncateMode::to_size(uStack_170,local_168,uVar1);
        lVar2 = file_truncate(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),param_5,uVar1
                             );
      } while (lVar2 == 0);
    }
  }
  else {
    local_d8 = (undefined4)local_168;
    uStack_d4 = local_168._4_4_;
    uStack_d0 = (undefined4)uStack_160;
    uStack_cc = uStack_160._4_4_;
    local_e8 = (int)local_178;
    uStack_e4 = local_178._4_4_;
    iStack_e0 = (int)uStack_170;
    uStack_dc = uStack_170._4_4_;
    lVar2 = truncate_size_only::___closure__(&local_e8);
  }
  return lVar2;
}