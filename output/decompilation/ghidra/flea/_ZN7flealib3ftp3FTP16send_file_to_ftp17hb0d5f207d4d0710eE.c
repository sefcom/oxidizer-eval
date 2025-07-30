char * _ZN7flealib3ftp3FTP16send_file_to_ftp17hb0d5f207d4d0710eE
                 (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  int local_f8;
  undefined4 uStack_f4;
  undefined uStack_f0;
  undefined4 uStack_ef;
  undefined4 uStack_eb;
  undefined3 uStack_e7;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_88 = CONCAT62(local_88._2_6_,0x15);
  local_98 = param_3;
  uStack_90 = param_4;
  _ZN3ftp3ftp9FtpStream7connect17hf1e5995836a208f5E(&local_f8,&local_98);
  puVar2 = (undefined *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_ef,uStack_f0));
  uStack_60 = CONCAT31(uStack_e7,uStack_eb._3_1_);
  uStack_c0 = CONCAT44(uStack_e4,uStack_60);
  local_b8 = uStack_e0;
  puVar3 = local_b8;
  uStack_b0 = uStack_d8;
  uVar4 = uStack_b0;
  if (CONCAT44(uStack_f4,local_f8) == 0) {
    *(undefined **)(param_1 + 0x10) = uStack_e0;
    *(undefined8 *)(param_1 + 0x18) = uStack_d8;
    *(undefined **)param_1 = puVar2;
    *(undefined8 *)(param_1 + 8) = uStack_c0;
    return param_1;
  }
  local_c8._0_4_ = (int)CONCAT41(uStack_ef,uStack_f0);
  local_c8._4_4_ = (undefined4)((ulong)puVar2 >> 0x20);
  local_b8._0_4_ = SUB84(uStack_e0,0);
  local_b8._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
  uStack_b0._0_4_ = (undefined4)uStack_d8;
  uStack_b0._4_4_ = (undefined4)((ulong)uStack_d8 >> 0x20);
  local_68 = (int)local_c8;
  uStack_64 = local_c8._4_4_;
  uStack_5c = uStack_e4;
  local_58 = (undefined4)local_b8;
  uStack_54 = local_b8._4_4_;
  uStack_50 = (undefined4)uStack_b0;
  uStack_4c = uStack_b0._4_4_;
  local_48 = local_d0;
                    /* try { // try from 004a41c3 to 004a42d0 has its CatchHandler @ 004a4610 */
  local_c8 = puVar2;
  local_b8 = puVar3;
  uStack_b0 = uVar4;
  (*(code *)PTR__ZN3ftp3ftp9FtpStream5login17h85964480719ee466E_008288b0)
            (&local_f8,local_70,param_5,param_6,param_7,param_8);
  if ((char)local_f8 == '\x04') {
    uVar5 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
    if (3 < uVar5) {
      local_f8 = 0x80ba30;
      uStack_f4 = 0;
      uStack_f0 = 1;
      uStack_ef = 0;
      uStack_eb = 0x8000000;
      uStack_e7 = 0;
      uStack_e4 = 0;
      uStack_e0 = (undefined *)0x0;
      uStack_d8 = 0;
      local_a8 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                           (&PTR_DAT_0080baf0);
      local_c8 = &DAT_0016ef14;
      uStack_c0 = 0xc;
      local_b8 = &DAT_0016ef14;
      uStack_b0 = 0xc;
      _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_f8,4,&local_c8);
    }
    (*(code *)PTR__ZN3ftp3ftp9FtpStream3cwd17h97cbe361f69c5b5dE_008288b8)
              (&local_f8,local_70,param_11,param_12);
    if ((char)local_f8 == '\x04') {
      (*(code *)
        PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
      )(&local_f8,param_9,param_10);
      if (local_f8 == 1) {
        (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
                  (&PTR_DAT_0080bb08);
      }
      else {
        _ZN7flealib3ftp3FTP16read_file_to_vec17he7dde53015678ca3E
                  (&local_40,CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_ef,uStack_f0)),
                   CONCAT44(uStack_e4,CONCAT31(uStack_e7,uStack_eb._3_1_)));
        local_88 = local_30;
        local_98 = CONCAT44(uStack_3c,local_40);
        uStack_90 = CONCAT44(uStack_34,uStack_38);
        local_80 = 0;
                    /* try { // try from 004a4479 to 004a454f has its CatchHandler @ 004a45fb */
        lVar6 = (*(code *)PTR__ZN3std4path4Path9file_name17h0fed3ab641b82e54E_008288d0)
                          (param_9,param_10);
        if (lVar6 == 0) {
          ppuVar7 = &PTR_DAT_0080bb20;
        }
        else {
          (*(code *)
            PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
          )(&local_c8,lVar6);
          if ((int)local_c8 != 1) {
            _ZN3ftp3ftp9FtpStream3put17h92f0c1ef1757d774E
                      (&local_f8,local_70,uStack_c0,local_b8,&local_98);
            if ((char)local_f8 == '\x04') {
              uVar5 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                                (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
              if (3 < uVar5) {
                local_f8 = 0x80bad0;
                uStack_f4 = 0;
                uStack_f0 = 1;
                uStack_ef = 0;
                uStack_eb = 0x8000000;
                uStack_e7 = 0;
                uStack_e4 = 0;
                uStack_e0 = (undefined *)0x0;
                uStack_d8 = 0;
                local_a8 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                     (&PTR_DAT_0080bb50);
                local_c8 = &DAT_0016ef14;
                uStack_c0 = 0xc;
                local_b8 = &DAT_0016ef14;
                uStack_b0 = 0xc;
                _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_f8,4,&local_c8);
              }
                    /* try { // try from 004a4550 to 004a45c2 has its CatchHandler @ 004a4610 */
              _ZN4core3ptr48drop_in_place_LT_lettre__message__body__Body_GT_17h5cc690b9a7f87720E
                        (&local_98);
              (*(code *)PTR__ZN3ftp3ftp9FtpStream4quit17hdc9294a3d59b9b89E_008288c8)
                        (param_1,local_70);
            }
            else {
              *(uint *)(param_1 + 0x10) = CONCAT31(uStack_e7,uStack_eb._3_1_);
              *(undefined4 *)(param_1 + 0x14) = uStack_e4;
              *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_e0;
              *(undefined4 *)(param_1 + 0x1c) = uStack_e0._4_4_;
              *(uint *)(param_1 + 1) = CONCAT13((undefined)uStack_f4,local_f8._1_3_);
              *(uint *)(param_1 + 5) = CONCAT13(uStack_f0,uStack_f4._1_3_);
              *(undefined4 *)(param_1 + 9) = uStack_ef;
              *(undefined4 *)(param_1 + 0xd) = uStack_eb;
              *param_1 = (char)local_f8;
              _ZN4core3ptr48drop_in_place_LT_lettre__message__body__Body_GT_17h5cc690b9a7f87720E
                        (&local_98);
            }
            goto LAB_004a4426;
          }
          ppuVar7 = &PTR_DAT_0080bb38;
        }
                    /* try { // try from 004a45d5 to 004a45da has its CatchHandler @ 004a45fb */
        (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)(ppuVar7);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_e4,CONCAT31(uStack_e7,uStack_eb._3_1_));
  *(undefined **)(param_1 + 0x18) = uStack_e0;
  *(uint *)(param_1 + 1) = CONCAT13((undefined)uStack_f4,local_f8._1_3_);
  *(uint *)(param_1 + 5) = CONCAT13(uStack_f0,uStack_f4._1_3_);
  *(undefined4 *)(param_1 + 9) = uStack_ef;
  *(undefined4 *)(param_1 + 0xd) = uStack_eb;
  *param_1 = (char)local_f8;
LAB_004a4426:
  _ZN4core3ptr40drop_in_place_LT_ftp__ftp__FtpStream_GT_17hc72709d3b445c73cE(local_70);
  return param_1;
}