ulong _ZN18alacritty_terminal3tty15terminfo_exists17hb036c6d2702b0611E(void)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 ***pppuVar12;
  undefined auVar14 [16];
  undefined auVar15 [12];
  ulong *local_1c0;
  undefined8 **local_1b8;
  undefined8 local_1b0;
  undefined8 **local_1a8;
  ulong local_1a0;
  ulong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 **local_178;
  undefined8 local_170;
  long local_168;
  undefined8 **local_160;
  long local_158;
  undefined8 **local_150;
  ulong local_148;
  undefined8 local_140;
  undefined2 local_118;
  undefined8 **local_110;
  ulong local_108;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 **local_48;
  undefined8 local_40;
  ulong *local_38;
  undefined7 uVar13;
  
  auVar14 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                      (1,"alacritty",9);
  if (auVar14._0_8_ == 0) {
    auVar14 = ZEXT816(1);
  }
  local_168 = auVar14._8_8_;
  lVar10 = auVar14._0_8_;
  local_150 = (undefined8 **)(lVar10 + local_168);
  local_158 = lVar10;
  auVar15 = _ZN4core3str11validations15next_code_point17hd6db6f63b50941c2E(&local_158);
  uVar8 = 0x110000;
  if ((auVar15 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    uVar8 = auVar15._8_4_;
  }
  local_198 = 0;
  if (uVar8 != 0x110000) {
    local_198 = (ulong)uVar8;
  }
  local_1c0 = &local_198;
  local_1b8 = (undefined8 **)
              PTR__ZN4core3fmt3num55__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_usize_GT_3fmt17h91fefd22111a860cE_009debe0
  ;
  local_110 = (undefined8 **)&DAT_001e8b60;
  local_108 = 1;
  local_f0 = 0;
  local_100 = &local_1c0;
  local_f8 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h2801a126379f10f2E(&local_60,&local_110);
                    /* try { // try from 006bfd9c to 006bfdd7 has its CatchHandler @ 006c11b0 */
  _ZN3std3env6var_os17hd7146e273ce03f5cE(&local_198);
  uVar3 = local_188;
  uVar2 = local_190;
  local_1a0 = local_198;
                    /* try { // try from 006bfe05 to 006bfe17 has its CatchHandler @ 006c1155 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
            (&local_110,local_190,local_188);
  uVar11 = local_108;
  local_160 = local_110;
                    /* try { // try from 006bfe35 to 006bfe4a has its CatchHandler @ 006c114f */
  _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_158,local_108,local_100,lVar10,local_168);
  pppuVar12 = (undefined8 ***)local_150;
                    /* try { // try from 006bfe58 to 006bfe71 has its CatchHandler @ 006c1149 */
  _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_1c0,local_150,local_148,"alacritty",9);
  ppuVar1 = local_1b8;
                    /* try { // try from 006bfe7c to 006bfea3 has its CatchHandler @ 006c115b */
  _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
  ppuVar4 = local_110;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
            (local_110,local_108);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_1c0,ppuVar1);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_158,pppuVar12);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_160,uVar11);
  if ((int)ppuVar4 == 2) {
                    /* try { // try from 006bfed5 to 006bfee7 has its CatchHandler @ 006c1155 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
              (&local_110,uVar2,uVar3);
    uVar11 = local_108;
    ppuVar4 = local_110;
                    /* try { // try from 006bff00 to 006bff14 has its CatchHandler @ 006c1047 */
    _ZN3std4path4Path4join17h4e2a8e523b728149E(&local_158,local_108,local_100,&local_60);
    ppuVar1 = local_150;
                    /* try { // try from 006bff22 to 006bff3b has its CatchHandler @ 006c103e */
    _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_1c0,local_150,local_148,"alacritty",9);
    pppuVar12 = (undefined8 ***)local_1b8;
                    /* try { // try from 006bff46 to 006bff6d has its CatchHandler @ 006c10e9 */
    _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
    ppuVar5 = local_110;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
              (local_110,local_108);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_1c0,pppuVar12);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_158,ppuVar1);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(ppuVar4,uVar11);
    if ((int)ppuVar5 != 2) goto LAB_006bffab;
    _ZN4core3ptr45drop_in_place_LT_regex_syntax__ast__Error_GT_17h39aaa2436f8056acE(local_1a0,uVar2)
    ;
                    /* try { // try from 006c0161 to 006c0176 has its CatchHandler @ 006c11b0 */
    _ZN3std3env3var17hc40ca77fbae151c0E(&local_1c0,"TERMINFO_DIRS",0xd);
    if (local_1c0 == (ulong *)&DAT_00000001) {
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
                (&local_1c0);
LAB_006c03ca:
                    /* try { // try from 006c03ca to 006c0411 has its CatchHandler @ 006c11b0 */
      _ZN3std3env3var17hc40ca77fbae151c0E(&local_158,"PREFIX",6);
      if (local_158 == 1) {
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
                  (&local_158);
LAB_006c03f9:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                  (&local_110,"/etc/terminfo",0xd);
        uVar11 = local_108;
        ppuVar5 = local_110;
                    /* try { // try from 006c042a to 006c043f has its CatchHandler @ 006c1017 */
        _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_158,local_108,local_100,lVar10,local_168);
        ppuVar4 = local_150;
                    /* try { // try from 006c044d to 006c0466 has its CatchHandler @ 006c100e */
        _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_1c0,local_150,local_148,"alacritty",9);
        ppuVar1 = local_1b8;
                    /* try { // try from 006c0471 to 006c0498 has its CatchHandler @ 006c10b5 */
        _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
        ppuVar6 = local_110;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                  (local_110,local_108);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_1c0,ppuVar1)
        ;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_158,ppuVar4)
        ;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(ppuVar5,uVar11);
        uVar13 = (undefined7)((ulong)pppuVar12 >> 8);
        uVar11 = CONCAT71(uVar13,1);
        if ((int)ppuVar6 == 2) {
                    /* try { // try from 006c04cb to 006c04e3 has its CatchHandler @ 006c11b0 */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                    (&local_110,"/etc/terminfo",0xd);
          uVar7 = local_108;
          ppuVar5 = local_110;
                    /* try { // try from 006c04fc to 006c0510 has its CatchHandler @ 006c0ff1 */
          _ZN3std4path4Path4join17h4e2a8e523b728149E(&local_158,local_108,local_100,&local_60);
          ppuVar4 = local_150;
                    /* try { // try from 006c051e to 006c0537 has its CatchHandler @ 006c0fef */
          _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_1c0,local_150,local_148,"alacritty",9);
          ppuVar1 = local_1b8;
                    /* try { // try from 006c0542 to 006c0569 has its CatchHandler @ 006c1009 */
          _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
          ppuVar6 = local_110;
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                    (local_110,local_108);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                    (local_1c0,ppuVar1);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                    (local_158,ppuVar4);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(ppuVar5,uVar7);
          if ((int)ppuVar6 == 2) {
                    /* try { // try from 006c0599 to 006c05b1 has its CatchHandler @ 006c11b0 */
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                      (&local_110,"/lib/terminfo",0xd);
            uVar7 = local_108;
            ppuVar5 = local_110;
                    /* try { // try from 006c05ca to 006c05df has its CatchHandler @ 006c0fdf */
            _ZN3std4path4Path4join17hbae7534d0ed9947bE
                      (&local_158,local_108,local_100,lVar10,local_168);
            ppuVar4 = local_150;
                    /* try { // try from 006c05ed to 006c0606 has its CatchHandler @ 006c0fdd */
            _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_1c0,local_150,local_148,"alacritty",9)
            ;
            ppuVar1 = local_1b8;
                    /* try { // try from 006c0611 to 006c0638 has its CatchHandler @ 006c0fea */
            _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
            ppuVar6 = local_110;
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                      (local_110,local_108);
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                      (local_1c0,ppuVar1);
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                      (local_158,ppuVar4);
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(ppuVar5,uVar7)
            ;
            if ((int)ppuVar6 == 2) {
                    /* try { // try from 006c0668 to 006c0680 has its CatchHandler @ 006c11b0 */
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                        (&local_110,"/lib/terminfo",0xd);
              uVar7 = local_108;
              ppuVar5 = local_110;
                    /* try { // try from 006c0699 to 006c06ad has its CatchHandler @ 006c0fcd */
              _ZN3std4path4Path4join17h4e2a8e523b728149E(&local_158,local_108,local_100,&local_60);
              ppuVar4 = local_150;
                    /* try { // try from 006c06bb to 006c06d4 has its CatchHandler @ 006c0fcb */
              _ZN3std4path4Path4join17hbae7534d0ed9947bE
                        (&local_1c0,local_150,local_148,"alacritty",9);
              ppuVar1 = local_1b8;
                    /* try { // try from 006c06df to 006c0706 has its CatchHandler @ 006c0fd8 */
              _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
              ppuVar6 = local_110;
              _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                        (local_110,local_108);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                        (local_1c0,ppuVar1);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                        (local_158,ppuVar4);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                        (ppuVar5,uVar7);
              if ((int)ppuVar6 == 2) {
                    /* try { // try from 006c0736 to 006c074e has its CatchHandler @ 006c11b0 */
                _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                          (&local_110,"/usr/share/terminfo",0x13);
                uVar7 = local_108;
                ppuVar5 = local_110;
                    /* try { // try from 006c0767 to 006c077c has its CatchHandler @ 006c0fbb */
                _ZN3std4path4Path4join17hbae7534d0ed9947bE
                          (&local_158,local_108,local_100,lVar10,local_168);
                ppuVar4 = local_150;
                    /* try { // try from 006c078a to 006c07a3 has its CatchHandler @ 006c0fb9 */
                _ZN3std4path4Path4join17hbae7534d0ed9947bE
                          (&local_1c0,local_150,local_148,"alacritty",9);
                ppuVar1 = local_1b8;
                    /* try { // try from 006c07ae to 006c07d5 has its CatchHandler @ 006c0fc6 */
                _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
                ppuVar6 = local_110;
                _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                          (local_110,local_108);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                          (local_1c0,ppuVar1);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                          (local_158,ppuVar4);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                          (ppuVar5,uVar7);
                if ((int)ppuVar6 == 2) {
                    /* try { // try from 006c0805 to 006c081d has its CatchHandler @ 006c11b0 */
                  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                            (&local_110,"/usr/share/terminfo",0x13);
                  uVar7 = local_108;
                  ppuVar5 = local_110;
                    /* try { // try from 006c0836 to 006c084a has its CatchHandler @ 006c0f9d */
                  _ZN3std4path4Path4join17h4e2a8e523b728149E
                            (&local_158,local_108,local_100,&local_60);
                  ppuVar4 = local_150;
                    /* try { // try from 006c0858 to 006c0871 has its CatchHandler @ 006c0f9b */
                  _ZN3std4path4Path4join17hbae7534d0ed9947bE
                            (&local_1c0,local_150,local_148,"alacritty",9);
                  ppuVar1 = local_1b8;
                    /* try { // try from 006c087c to 006c08a3 has its CatchHandler @ 006c0fb4 */
                  _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
                  ppuVar6 = local_110;
                  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                            (local_110,local_108);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                            (local_1c0,ppuVar1);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                            (local_158,ppuVar4);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                            (ppuVar5,uVar7);
                  if ((int)ppuVar6 == 2) {
                    /* try { // try from 006c08d3 to 006c08eb has its CatchHandler @ 006c11b0 */
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                              (&local_110,"/boot/system/data/terminfo",0x1a);
                    uVar7 = local_108;
                    ppuVar5 = local_110;
                    /* try { // try from 006c0904 to 006c0919 has its CatchHandler @ 006c0f8d */
                    _ZN3std4path4Path4join17hbae7534d0ed9947bE
                              (&local_158,local_108,local_100,lVar10,local_168);
                    ppuVar4 = local_150;
                    /* try { // try from 006c0927 to 006c0940 has its CatchHandler @ 006c0f88 */
                    _ZN3std4path4Path4join17hbae7534d0ed9947bE
                              (&local_1c0,local_150,local_148,"alacritty",9);
                    ppuVar1 = local_1b8;
                    /* try { // try from 006c094b to 006c0972 has its CatchHandler @ 006c0f96 */
                    _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
                    ppuVar6 = local_110;
                    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                              (local_110,local_108);
                    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                              (local_1c0,ppuVar1);
                    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                              (local_158,ppuVar4);
                    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                              (ppuVar5,uVar7);
                    if ((int)ppuVar6 == 2) {
                    /* try { // try from 006c09a2 to 006c09ba has its CatchHandler @ 006c11b0 */
                      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                                (&local_110,"/boot/system/data/terminfo",0x1a);
                      uVar7 = local_108;
                      ppuVar5 = local_110;
                    /* try { // try from 006c09d3 to 006c09e7 has its CatchHandler @ 006c0f7e */
                      _ZN3std4path4Path4join17h4e2a8e523b728149E
                                (&local_158,local_108,local_100,&local_60);
                      ppuVar4 = local_150;
                    /* try { // try from 006c09f5 to 006c0a0e has its CatchHandler @ 006c0f79 */
                      _ZN3std4path4Path4join17hbae7534d0ed9947bE
                                (&local_1c0,local_150,local_148,"alacritty",9);
                      ppuVar1 = local_1b8;
                    /* try { // try from 006c0a19 to 006c0a40 has its CatchHandler @ 006c0f83 */
                      _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_1b8,local_1b0);
                      ppuVar6 = local_110;
                      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                                (local_110,local_108);
                      uVar11 = CONCAT71(uVar13,(int)ppuVar6 != 2);
                      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                                (local_1c0,ppuVar1);
                      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                                (local_158,ppuVar4);
                      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                                (ppuVar5,uVar7);
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_006c0f50;
      }
      local_160 = local_150;
                    /* try { // try from 006c0a8d to 006c0aab has its CatchHandler @ 006c1062 */
      local_1a0 = local_148;
      _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_1c0,local_148,local_140,"etc/terminfo",0xc);
      ppuVar1 = local_1b8;
                    /* try { // try from 006c0ab6 to 006c0acb has its CatchHandler @ 006c1003 */
      _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_198,local_1b8,local_1b0,lVar10,local_168);
      uVar2 = local_190;
                    /* try { // try from 006c0ad6 to 006c0aef has its CatchHandler @ 006c0ffd */
      _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_180,local_190,local_188,"alacritty",9);
      pppuVar12 = (undefined8 ***)local_178;
                    /* try { // try from 006c0afa to 006c0b21 has its CatchHandler @ 006c1068 */
      _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
      ppuVar4 = local_110;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                (local_110,local_108);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_180,pppuVar12)
      ;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_198,uVar2);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_1c0,ppuVar1);
      if ((int)ppuVar4 == 2) {
                    /* try { // try from 006c0b53 to 006c0b71 has its CatchHandler @ 006c1062 */
        _ZN3std4path4Path4join17hbae7534d0ed9947bE
                  (&local_1c0,local_1a0,local_140,"etc/terminfo",0xc);
        ppuVar1 = local_1b8;
                    /* try { // try from 006c0b7c to 006c0b90 has its CatchHandler @ 006c0fe8 */
        _ZN3std4path4Path4join17h4e2a8e523b728149E(&local_198,local_1b8,local_1b0,&local_60);
        uVar2 = local_190;
                    /* try { // try from 006c0b9b to 006c0bb4 has its CatchHandler @ 006c0fe6 */
        _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_180,local_190,local_188,"alacritty",9);
        pppuVar12 = (undefined8 ***)local_178;
                    /* try { // try from 006c0bbf to 006c0be6 has its CatchHandler @ 006c0ffb */
        _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
        ppuVar4 = local_110;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                  (local_110,local_108);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                  (local_180,pppuVar12);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_198,uVar2);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_1c0,ppuVar1)
        ;
        if ((int)ppuVar4 == 2) {
                    /* try { // try from 006c0c18 to 006c0c36 has its CatchHandler @ 006c1062 */
          _ZN3std4path4Path4join17hbae7534d0ed9947bE
                    (&local_1c0,local_1a0,local_140,"lib/terminfo",0xc);
          ppuVar1 = local_1b8;
                    /* try { // try from 006c0c41 to 006c0c56 has its CatchHandler @ 006c0fd6 */
          _ZN3std4path4Path4join17hbae7534d0ed9947bE
                    (&local_198,local_1b8,local_1b0,lVar10,local_168);
          uVar2 = local_190;
                    /* try { // try from 006c0c61 to 006c0c7a has its CatchHandler @ 006c0fd4 */
          _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_180,local_190,local_188,"alacritty",9);
          pppuVar12 = (undefined8 ***)local_178;
                    /* try { // try from 006c0c85 to 006c0cac has its CatchHandler @ 006c0fe1 */
          _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
          ppuVar4 = local_110;
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                    (local_110,local_108);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                    (local_180,pppuVar12);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_198,uVar2)
          ;
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                    (local_1c0,ppuVar1);
          if ((int)ppuVar4 == 2) {
                    /* try { // try from 006c0cde to 006c0cfc has its CatchHandler @ 006c1062 */
            _ZN3std4path4Path4join17hbae7534d0ed9947bE
                      (&local_1c0,local_1a0,local_140,"lib/terminfo",0xc);
            ppuVar1 = local_1b8;
                    /* try { // try from 006c0d07 to 006c0d1b has its CatchHandler @ 006c0fc4 */
            _ZN3std4path4Path4join17h4e2a8e523b728149E(&local_198,local_1b8,local_1b0,&local_60);
            uVar2 = local_190;
                    /* try { // try from 006c0d26 to 006c0d3f has its CatchHandler @ 006c0fc2 */
            _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_180,local_190,local_188,"alacritty",9)
            ;
            pppuVar12 = (undefined8 ***)local_178;
                    /* try { // try from 006c0d4a to 006c0d71 has its CatchHandler @ 006c0fcf */
            _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
            ppuVar4 = local_110;
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                      (local_110,local_108);
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                      (local_180,pppuVar12);
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                      (local_198,uVar2);
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                      (local_1c0,ppuVar1);
            if ((int)ppuVar4 == 2) {
                    /* try { // try from 006c0da3 to 006c0dc1 has its CatchHandler @ 006c1062 */
              _ZN3std4path4Path4join17hbae7534d0ed9947bE
                        (&local_1c0,local_1a0,local_140,"share/terminfo",0xe);
              ppuVar1 = local_1b8;
                    /* try { // try from 006c0dcc to 006c0de1 has its CatchHandler @ 006c0fb2 */
              _ZN3std4path4Path4join17hbae7534d0ed9947bE
                        (&local_198,local_1b8,local_1b0,lVar10,local_168);
              uVar2 = local_190;
                    /* try { // try from 006c0dec to 006c0e05 has its CatchHandler @ 006c0fb0 */
              _ZN3std4path4Path4join17hbae7534d0ed9947bE
                        (&local_180,local_190,local_188,"alacritty",9);
              pppuVar12 = (undefined8 ***)local_178;
                    /* try { // try from 006c0e10 to 006c0e37 has its CatchHandler @ 006c0fbd */
              _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
              ppuVar4 = local_110;
              _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                        (local_110,local_108);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                        (local_180,pppuVar12);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                        (local_198,uVar2);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                        (local_1c0,ppuVar1);
              if ((int)ppuVar4 == 2) {
                    /* try { // try from 006c0e69 to 006c0e87 has its CatchHandler @ 006c1062 */
                _ZN3std4path4Path4join17hbae7534d0ed9947bE
                          (&local_1c0,local_1a0,local_140,"share/terminfo",0xe);
                ppuVar1 = local_1b8;
                    /* try { // try from 006c0e92 to 006c0ea6 has its CatchHandler @ 006c0f94 */
                _ZN3std4path4Path4join17h4e2a8e523b728149E(&local_198,local_1b8,local_1b0,&local_60)
                ;
                    /* try { // try from 006c0eb1 to 006c0eca has its CatchHandler @ 006c0f92 */
                _ZN3std4path4Path4join17hbae7534d0ed9947bE
                          (&local_180,local_190,local_188,"alacritty",9);
                    /* try { // try from 006c0ed5 to 006c0efc has its CatchHandler @ 006c0f9f */
                _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
                ppuVar4 = local_110;
                _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                          (local_110,local_108);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                          (local_180,local_178);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                          (local_198,local_190);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                          (local_1c0,ppuVar1);
                if ((int)ppuVar4 == 2) {
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                            (local_160,local_1a0);
                  goto LAB_006c03f9;
                }
              }
            }
          }
        }
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_160,local_1a0)
      ;
    }
    else {
      local_38 = local_1c0;
      local_48 = local_1b8;
      local_40 = local_1b0;
      _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                (&local_148,0x3a,local_1b0,local_1a8);
      local_158 = 0;
      local_150 = local_1a8;
      local_118 = 1;
      do {
                    /* try { // try from 006c01f0 to 006c0213 has its CatchHandler @ 006c1213 */
        auVar14 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hc7e8c662c5479c79E(&local_158);
        lVar9 = auVar14._0_8_;
        if (lVar9 == 0) {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
                    (local_48,local_40);
          pppuVar12 = &local_110;
          goto LAB_006c03ca;
        }
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                  (&local_110,lVar9);
        local_160 = local_110;
                    /* try { // try from 006c0231 to 006c0248 has its CatchHandler @ 006c11aa */
        local_1a0 = local_108;
        _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_198,local_108,local_100,lVar10,local_168);
        uVar2 = local_190;
                    /* try { // try from 006c0256 to 006c026f has its CatchHandler @ 006c11a4 */
        _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_180,local_190,local_188,"alacritty",9);
        pppuVar12 = (undefined8 ***)local_178;
                    /* try { // try from 006c027a to 006c029c has its CatchHandler @ 006c11e4 */
        _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
        ppuVar1 = local_110;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                  (local_110,local_108);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                  (local_180,pppuVar12);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_198,uVar2);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E
                  (local_160,local_1a0);
        if ((int)ppuVar1 != 2) break;
                    /* try { // try from 006c02d0 to 006c02e0 has its CatchHandler @ 006c1213 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                  (&local_110,lVar9,auVar14._8_8_);
        uVar11 = local_108;
        ppuVar4 = local_110;
                    /* try { // try from 006c02f9 to 006c030d has its CatchHandler @ 006c119e */
        _ZN3std4path4Path4join17h4e2a8e523b728149E(&local_198,local_108,local_100,&local_60);
        uVar2 = local_190;
                    /* try { // try from 006c0318 to 006c0331 has its CatchHandler @ 006c1198 */
        _ZN3std4path4Path4join17hbae7534d0ed9947bE(&local_180,local_190,local_188,"alacritty",9);
        ppuVar1 = local_178;
                    /* try { // try from 006c033c to 006c035e has its CatchHandler @ 006c11b9 */
        _ZN3std2fs8metadata17h37a5ee4ea4f3ae9dE(&local_110,local_178,local_170);
        ppuVar5 = local_110;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h89e95d7730a9ff6cE
                  (local_110,local_108);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_180,ppuVar1)
        ;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(local_198,uVar2);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h188b8bbb7742b9f2E(ppuVar4,uVar11);
        pppuVar12 = &local_110;
      } while ((int)ppuVar5 == 2);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
                (local_48,local_40);
    }
  }
  else {
LAB_006bffab:
    _ZN4core3ptr45drop_in_place_LT_regex_syntax__ast__Error_GT_17h39aaa2436f8056acE(local_1a0,uVar2)
    ;
  }
  uVar11 = CONCAT71((int7)((ulong)pppuVar12 >> 8),1);
LAB_006c0f50:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E(local_60,local_58);
  return uVar11 & 0xffffffff;
}