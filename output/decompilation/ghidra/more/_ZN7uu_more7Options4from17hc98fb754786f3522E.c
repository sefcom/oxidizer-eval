undefined8 * _ZN7uu_more7Options4from17hc98fb754786f3522E(undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5faaeded7704dcb7E
            (&local_78,param_2,&DAT_00118bdb,5);
  puVar7 = (ushort *)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17h2202a89f344cb1a0E
                     (&DAT_00118bdb,5,&local_78);
  puVar8 = puVar7;
  if (puVar7 != (ushort *)0x0) {
    puVar8 = (ushort *)(ulong)*puVar7;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5faaeded7704dcb7E
            (&local_78,param_2,&DAT_00118be0,6);
  puVar9 = (ushort *)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17h2202a89f344cb1a0E
                     (&DAT_00118be0,6,&local_78);
  puVar10 = puVar9;
  if (puVar9 != (ushort *)0x0) {
    puVar10 = (ushort *)(ulong)*puVar9;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc3ec2a4b53b285b0E
            (&local_78,param_2,&DAT_00118be6,9);
  puVar11 = (ulong *)_ZN12clap_builder6parser5error12MatchesError6unwrap17hf31638e1afc90cd2E
                               (&DAT_00118be6,9,&local_78);
  if (puVar11 != (ulong *)0x0) {
    local_88 = *puVar11;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0776bc345d7a7a82E
            (&local_78,param_2,&DAT_00118bef,7);
  lVar12 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h64788ee122c687a0E
                     (&DAT_00118bef,7,&local_78);
  if (lVar12 == 0) {
    local_48 = 0x8000000000000000;
  }
  else {
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_48,lVar12);
  }
                    /* try { // try from 001dc16a to 001dc182 has its CatchHandler @ 001dc269 */
  uVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00118bf6,0xb);
  local_68 = local_38;
  local_78 = (undefined4)local_48;
  uStack_74 = local_48._4_4_;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
                    /* try { // try from 001dc197 to 001dc1da has its CatchHandler @ 001dc278 */
  uVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00118c01,10);
  uVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00118c0b,6);
  uVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00118c11,7);
  bVar2 = (short)puVar8 != 0;
  sVar1 = (short)puVar8;
  if (puVar7 == (ushort *)0x0) {
    bVar2 = (short)puVar10 != 0 && puVar9 != (ushort *)0x0;
    sVar1 = (short)puVar10;
  }
  lVar12 = 0;
  if (1 < local_88) {
    lVar12 = local_88 - 1;
  }
  if (puVar11 == (ulong *)0x0) {
    lVar12 = 0;
  }
  *(undefined *)((long)param_1 + 0x24) = uVar3;
  param_1[3] = lVar12;
  *(ushort *)(param_1 + 4) = (ushort)bVar2;
  *(short *)((long)param_1 + 0x22) = sVar1 + 1;
  *param_1 = CONCAT44(uStack_74,local_78);
  param_1[1] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = local_68;
  *(undefined *)((long)param_1 + 0x25) = uVar4;
  *(undefined *)((long)param_1 + 0x26) = uVar5;
  *(undefined *)((long)param_1 + 0x27) = uVar6;
  return param_1;
}