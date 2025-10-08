char * _ZN3bat10line_range9LineRange11parse_range17heebe4213cefeda82E
                 (char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  char *unaff_R12;
  char *pcVar8;
  undefined auVar9 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  long local_38;
  
  if (param_3 == (char *)0x0) {
LAB_0053c399:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
              (param_1 + 8,"Empty line range",0x10);
    *param_1 = '\v';
    return param_1;
  }
  cVar1 = *param_2;
  if (cVar1 != ':') {
    uStack_90 = param_2 + (long)param_3;
    local_98 = param_2;
    pcVar4 = (char *)_ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17he12edd73c094a135E
                               (&local_98);
    if (pcVar4 == (char *)0x0) goto LAB_0053c399;
    if (*pcVar4 == ':') {
      unaff_R12 = param_3 + -1;
      if (cVar1 == '-') {
        uVar6 = 1;
        lVar3 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                          (1,unaff_R12,param_2,param_3);
        if (lVar3 != 0) {
          _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                    (&local_98,lVar3);
          if ((char)local_98 == '\0') goto LAB_0053c4e6;
          goto LAB_0053c3e6;
        }
        goto LAB_0053c8bd;
      }
      lVar3 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (unaff_R12,param_2,param_3);
      if (lVar3 != 0) {
        _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_98,lVar3)
        ;
        if ((char)local_98 == '\0') {
          uVar6 = 0;
LAB_0053c4e6:
          *(undefined8 *)(param_1 + 8) = uVar6;
          *(char **)(param_1 + 0x10) = uStack_90;
          param_1[0x18] = '\0';
          param_1[0x19] = '\0';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          param_1[0x1c] = '\0';
          param_1[0x1d] = '\0';
          param_1[0x1e] = '\0';
          param_1[0x1f] = '\0';
          param_1[0x20] = -1;
          param_1[0x21] = -1;
          param_1[0x22] = -1;
          param_1[0x23] = -1;
          param_1[0x24] = -1;
          param_1[0x25] = -1;
          param_1[0x26] = -1;
          param_1[0x27] = -1;
          *param_1 = '\r';
          return uStack_90;
        }
        goto LAB_0053c3e6;
      }
      goto LAB_0053c8d8;
    }
    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
              (&local_88,0x3a,param_2,param_3);
    local_98 = (char *)0x0;
    local_58 = 1;
    uStack_90 = param_3;
    _ZN4core4iter6traits8iterator8Iterator7collect17h9b072ccbbd6d7802E(&local_48,&local_98);
    if (local_38 == 1) {
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (&local_98,*local_40,local_40[1]);
      if ((char)local_98 != '\0') {
LAB_0053c69b:
        *param_1 = '\x04';
        param_1[1] = local_98._1_1_;
        goto LAB_0053c86b;
      }
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      *(char **)(param_1 + 0x10) = uStack_90;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(char **)(param_1 + 0x20) = uStack_90;
    }
    else {
      if (local_38 != 2) {
        if (local_38 != 3) {
          (*(code *)
            PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
          )(&local_98,&DAT_002a2a4f,0x5d);
          *(ulong *)(param_1 + 0x40) = CONCAT62(uStack_56,local_58);
          *(undefined8 *)(param_1 + 0x48) = uStack_50;
          *(undefined8 *)(param_1 + 0x30) = local_68;
          *(undefined8 *)(param_1 + 0x38) = uStack_60;
          *(undefined8 *)(param_1 + 0x20) = local_78;
          *(undefined8 *)(param_1 + 0x28) = uStack_70;
          *(undefined8 *)(param_1 + 0x10) = local_88;
          *(undefined8 *)(param_1 + 0x18) = uStack_80;
          *(undefined4 *)param_1 = (undefined4)local_98;
          *(undefined4 *)(param_1 + 4) = local_98._4_4_;
          *(undefined4 *)(param_1 + 8) = (undefined4)uStack_90;
          *(undefined4 *)(param_1 + 0xc) = uStack_90._4_4_;
          goto LAB_0053c86b;
        }
        lVar3 = local_40[3];
        if (lVar3 == 0) {
          _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                    (&local_98,*local_40,local_40[1]);
          pcVar4 = uStack_90;
          if ((char)local_98 == '\x01') {
            (*(code *)
              PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
            )(&local_98,&DAT_002a2ade,0x22);
          }
          else {
            _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                      (&local_98,local_40[4],local_40[5]);
            if ((char)local_98 != '\x01') {
              lVar3 = 0;
              if (uStack_90 <= pcVar4) {
                lVar3 = (long)pcVar4 - (long)uStack_90;
              }
LAB_0053c793:
              pcVar5 = (char *)0xffffffffffffffff;
              if (!CARRY8((ulong)pcVar4,(ulong)uStack_90)) {
                pcVar5 = pcVar4 + (long)uStack_90;
              }
              param_1[8] = '\0';
              param_1[9] = '\0';
              param_1[10] = '\0';
              param_1[0xb] = '\0';
              param_1[0xc] = '\0';
              param_1[0xd] = '\0';
              param_1[0xe] = '\0';
              param_1[0xf] = '\0';
              *(long *)(param_1 + 0x10) = lVar3;
              param_1[0x18] = '\0';
              param_1[0x19] = '\0';
              param_1[0x1a] = '\0';
              param_1[0x1b] = '\0';
              param_1[0x1c] = '\0';
              param_1[0x1d] = '\0';
              param_1[0x1e] = '\0';
              param_1[0x1f] = '\0';
              *(char **)(param_1 + 0x20) = pcVar5;
              goto LAB_0053c868;
            }
            (*(code *)
              PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
            )(&local_98,&DAT_002a2b00,0x25);
          }
        }
        else {
          _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                    (&local_98,*local_40,local_40[1]);
          pcVar5 = uStack_90;
          if ((char)local_98 == '\x01') {
                    /* try { // try from 0053c498 to 0053c7fc has its CatchHandler @ 0053c91f */
            (*(code *)
              PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
            )(&local_98,&DAT_002a2b25,0x29);
          }
          else {
            _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                      (&local_98,local_40[2],lVar3);
            pcVar4 = uStack_90;
            if ((char)local_98 == '\x01') {
              (*(code *)
                PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
              )(&local_98,&DAT_002a2b4e,0x27);
            }
            else {
              _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                        (&local_98,local_40[4],local_40[5]);
              if ((char)local_98 != '\x01') {
                lVar3 = 0;
                if (uStack_90 <= pcVar5) {
                  lVar3 = (long)pcVar5 - (long)uStack_90;
                }
                goto LAB_0053c793;
              }
              (*(code *)
                PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
              )(&local_98,&DAT_002a2b75,0x26);
            }
          }
        }
        goto LAB_0053c7fd;
      }
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (&local_98,*local_40,local_40[1]);
      pcVar4 = uStack_90;
      if ((char)local_98 == '\x01') goto LAB_0053c69b;
      unaff_R12 = (char *)local_40[2];
      param_2 = (char *)local_40[3];
      pcVar5 = pcVar4;
      if (param_2 == (char *)0x0) {
LAB_0053c683:
        _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                  (&local_98,unaff_R12,param_2);
        pcVar8 = uStack_90;
        if ((char)local_98 == '\x01') goto LAB_0053c69b;
      }
      else {
        if (*unaff_R12 != '+') {
          if (*unaff_R12 != '-') goto LAB_0053c683;
          auVar9 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                             (1,unaff_R12,param_2);
          if (auVar9._0_8_ != (char *)0x0) {
            if ((auVar9._8_8_ == 0) || (*auVar9._0_8_ != '+')) {
              lVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                                (1,unaff_R12,param_2);
              if (lVar3 == 0) {
                ppuVar7 = &PTR_s_src_line_range_rs_007ce7f8;
                goto LAB_0053c909;
              }
              _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                        (&local_98,lVar3);
              if ((char)local_98 != '\x01') {
                pcVar5 = (char *)0x0;
                pcVar8 = pcVar4;
                if (uStack_90 <= pcVar4) {
                  pcVar5 = pcVar4 + -(long)uStack_90;
                }
                goto LAB_0053c850;
              }
              (*(code *)
                PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
              )(&local_98,&DAT_002a2aac,0x19);
            }
            else {
              (*(code *)
                PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
              )(&local_98,&DAT_002a2aac,0x19);
            }
            goto LAB_0053c7fd;
          }
          goto LAB_0053c8f0;
        }
        lVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                          (1,unaff_R12,param_2);
        if (lVar3 == 0) {
          ppuVar7 = &PTR_s_src_line_range_rs_007ce810;
          goto LAB_0053c909;
        }
        _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_98,lVar3)
        ;
        if ((char)local_98 != '\0') {
          (*(code *)
            PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
          )(&local_98,&DAT_002a2ac5,0x19);
LAB_0053c7fd:
          *(ulong *)(param_1 + 0x40) = CONCAT62(uStack_56,local_58);
          *(undefined8 *)(param_1 + 0x48) = uStack_50;
          *(undefined8 *)(param_1 + 0x30) = local_68;
          *(undefined8 *)(param_1 + 0x38) = uStack_60;
          *(undefined8 *)(param_1 + 0x20) = local_78;
          *(undefined8 *)(param_1 + 0x28) = uStack_70;
          *(undefined8 *)(param_1 + 0x10) = local_88;
          *(undefined8 *)(param_1 + 0x18) = uStack_80;
          *(undefined4 *)param_1 = (undefined4)local_98;
          *(undefined4 *)(param_1 + 4) = local_98._4_4_;
          *(undefined4 *)(param_1 + 8) = (undefined4)uStack_90;
          *(undefined4 *)(param_1 + 0xc) = uStack_90._4_4_;
          goto LAB_0053c86b;
        }
        pcVar8 = (char *)0xffffffffffffffff;
        if (!CARRY8((ulong)uStack_90,(ulong)pcVar4)) {
          pcVar8 = uStack_90 + (long)pcVar4;
        }
      }
LAB_0053c850:
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      *(char **)(param_1 + 0x10) = pcVar5;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *(char **)(param_1 + 0x20) = pcVar8;
    }
LAB_0053c868:
    *param_1 = '\r';
LAB_0053c86b:
    pcVar4 = (char *)_ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
                               (local_48,local_40);
    return pcVar4;
  }
  if ((param_3 == &DAT_00000001) || (param_2[1] != '-')) {
    lVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (1,param_2,param_3);
    if (lVar3 != 0) {
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_98,lVar3);
      if ((char)local_98 == '\0') {
        uVar6 = 0;
        goto LAB_0053c3fd;
      }
      goto LAB_0053c3e6;
    }
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00807db8)
              (param_2,param_3,1,param_3,&PTR_s_src_line_range_rs_007ce780);
  }
  else {
    lVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (2,param_2,param_3);
    if (lVar3 != 0) {
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_98,lVar3);
      if ((char)local_98 == '\0') {
        uVar6 = 1;
LAB_0053c3fd:
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        *(char **)(param_1 + 0x20) = uStack_90;
        *param_1 = '\r';
        return uStack_90;
      }
LAB_0053c3e6:
      *param_1 = '\x04';
      param_1[1] = local_98._1_1_;
      return (char *)(ulong)local_98._1_1_;
    }
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00807db8)
            (param_2,param_3,2,param_3,&PTR_s_src_line_range_rs_007ce798);
LAB_0053c8bd:
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00807db8)
            (param_2,param_3,1,unaff_R12,&PTR_s_src_line_range_rs_007ce7b0);
LAB_0053c8d8:
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00807db8)
            (param_2,param_3,0,unaff_R12,&PTR_s_src_line_range_rs_007ce7c8);
LAB_0053c8f0:
  ppuVar7 = &PTR_s_src_line_range_rs_007ce7e0;
LAB_0053c909:
                    /* try { // try from 0053c909 to 0053c91c has its CatchHandler @ 0053c91f */
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00807db8)
            (unaff_R12,param_2,1,param_2,ppuVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}