void _ZN16fuel_core_client6client10FuelClient15decode_response17h09b9fa5506794bf8E
               (undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined local_58 [24];
  undefined local_40 [32];
  
                    /* try { // try from 00393174 to 003931af has its CatchHandler @ 00393341 */
  _ZN16fuel_core_client6client10FuelClient23update_chain_state_info17haf6a53de436ef9a6E
            (param_2,param_3);
  if (((*(int *)(param_3 + 0x13) != 2) && (*(byte *)(param_3 + 0x17) != 2)) &&
     ((*(byte *)(param_3 + 0x17) & 1) != 0)) {
    uVar18 = (*(code *)PTR__ZN3std2io5error5Error3new17h31653b416e5e1c98E_00720140)
                       (0x28,"The required block height was not met",0x25);
    param_1[1] = uVar18;
    *param_1 = 0x8000000000000009;
    _ZN4core3ptr139drop_in_place_LT_fuel_core_client__reqwest_ext__FuelGraphQlResponse_LT_fuel_core_client__client__schema__tx__TransactionStatusQuery_GT__GT_17h52621b42781dbb48E
              (param_3);
    return;
  }
  local_78 = *(undefined4 *)param_3;
  uStack_74 = *(undefined4 *)((long)param_3 + 4);
  lVar17 = *param_3;
  uStack_70 = *(undefined4 *)(param_3 + 1);
  uStack_6c = *(undefined4 *)((long)param_3 + 0xc);
  local_68 = param_3[2];
  if (param_3[3] == -0x7ffffffffffffff7) {
    if (*param_3 == -0x8000000000000000) {
                    /* try { // try from 00393264 to 00393317 has its CatchHandler @ 0039332e */
      uVar18 = (*(code *)PTR__ZN3std2io5error5Error3new17h31653b416e5e1c98E_00720140)
                         (0x28,&DAT_00188f80,0x10);
    }
    else {
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he05118ef1c285a50E
                (local_40,param_3);
      _ZN4core4iter6traits8iterator8Iterator7collect17h0ed4b21333e53f4fE(local_58,local_40);
      uVar18 = (*(code *)
                 PTR__ZN16fuel_core_client6client32from_strings_errors_to_std_error17h0d912308b953dd65E_00720148
               )(local_58);
    }
    param_1[1] = uVar18;
    *param_1 = 0x8000000000000009;
  }
  else {
    lVar16 = param_3[0x12];
    param_1[0xe] = param_3[0x11];
    param_1[0xf] = lVar16;
    lVar16 = param_3[0x10];
    param_1[0xc] = param_3[0xf];
    param_1[0xd] = lVar16;
    lVar16 = param_3[0xe];
    param_1[10] = param_3[0xd];
    param_1[0xb] = lVar16;
    lVar16 = param_3[0xc];
    param_1[8] = param_3[0xb];
    param_1[9] = lVar16;
    uVar1 = *(undefined4 *)(param_3 + 3);
    uVar2 = *(undefined4 *)((long)param_3 + 0x1c);
    uVar3 = *(undefined4 *)(param_3 + 4);
    uVar4 = *(undefined4 *)((long)param_3 + 0x24);
    uVar5 = *(undefined4 *)(param_3 + 5);
    uVar6 = *(undefined4 *)((long)param_3 + 0x2c);
    uVar7 = *(undefined4 *)(param_3 + 6);
    uVar8 = *(undefined4 *)((long)param_3 + 0x34);
    uVar9 = *(undefined4 *)(param_3 + 7);
    uVar10 = *(undefined4 *)((long)param_3 + 0x3c);
    uVar11 = *(undefined4 *)(param_3 + 8);
    uVar12 = *(undefined4 *)((long)param_3 + 0x44);
    uVar13 = *(undefined4 *)((long)param_3 + 0x4c);
    uVar14 = *(undefined4 *)(param_3 + 10);
    uVar15 = *(undefined4 *)((long)param_3 + 0x54);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 9);
    *(undefined4 *)((long)param_1 + 0x34) = uVar13;
    *(undefined4 *)(param_1 + 7) = uVar14;
    *(undefined4 *)((long)param_1 + 0x3c) = uVar15;
    *(undefined4 *)(param_1 + 4) = uVar9;
    *(undefined4 *)((long)param_1 + 0x24) = uVar10;
    *(undefined4 *)(param_1 + 5) = uVar11;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar12;
    *(undefined4 *)(param_1 + 2) = uVar5;
    *(undefined4 *)((long)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 3) = uVar7;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
    *(undefined4 *)param_1 = uVar1;
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    if (lVar17 != -0x8000000000000000) {
      _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT_cynic__result__GraphQlError_GT__GT_17hcfe179591baf6ce1E
                (&local_78);
    }
  }
  return;
}