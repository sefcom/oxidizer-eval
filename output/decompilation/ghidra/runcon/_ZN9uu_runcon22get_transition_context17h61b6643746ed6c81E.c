void _ZN9uu_runcon22get_transition_context17h61b6643746ed6c81E
               (int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int local_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  int iStack_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  int iStack_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  int iStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  int iStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined6 local_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  int local_b8 [2];
  int iStack_b0;
  int local_a8;
  int iStack_a0;
  int local_68 [2];
  int iStack_60;
  int local_58;
  int iStack_50;
  int iStack_44;
  int iStack_3c;
  
  (*(code *)PTR__ZN7selinux13SecurityClass9from_name17h5c3f7ce53126572eE_001f2418)
            (&local_f0,"process",7);
  uVar1 = uStack_ec;
  if (local_f0 == 10) {
    _ZN7selinux15SecurityContext7of_path17heca6cb6c406495b7E(&local_f0,param_2,param_3);
    if (local_f0 == 10) {
      if (iStack_e8 == 2) {
        _ZN9uu_runcon6errors5Error8from_io117h2e5a1b363c345453E
                  (param_1,"getfilecon",10,param_2,param_3,0x3d00000002);
      }
      else {
        local_a8 = iStack_d8;
        iStack_a0 = iStack_d0;
        local_b8[0] = iStack_e8;
        iStack_b0 = iStack_e0;
                    /* try { // try from 001617d9 to 001617e5 has its CatchHandler @ 00161933 */
        (*(code *)PTR__ZN7selinux15SecurityContext7current17h79d84b1b82db0947E_001f23d0)
                  (&local_f0,0);
        if (local_f0 == 10) {
          local_68[0] = iStack_e8;
          iStack_60 = iStack_e0;
          local_58 = iStack_d8;
          iStack_50 = iStack_d0;
                    /* try { // try from 00161809 to 0016182b has its CatchHandler @ 00161921 */
          (*(code *)
            PTR__ZN7selinux15SecurityContext20of_labeling_decision17hca9d9018d75f9852E_001f2420)
                    (&local_f0,local_68,local_b8,uVar1,1,0);
          if (local_f0 == 10) {
            param_1[6] = iStack_d8;
            param_1[7] = CONCAT22(uStack_d2,uStack_d4);
            param_1[8] = iStack_d0;
            param_1[9] = CONCAT22(uStack_ca,uStack_cc);
            param_1[2] = iStack_e8;
            param_1[3] = CONCAT22(uStack_e2,uStack_e4);
            param_1[4] = iStack_e0;
            param_1[5] = CONCAT22(uStack_da,uStack_dc);
            *param_1 = 0x11;
          }
          else {
            *(ulong *)(param_1 + 0xc) = CONCAT26(uStack_ba,uStack_c0);
            *(ulong *)(param_1 + 8) = CONCAT26(uStack_ca,CONCAT24(uStack_cc,iStack_d0));
            *(ulong *)(param_1 + 10) = CONCAT26(uStack_c2,local_c8);
            param_1[4] = iStack_e0;
            param_1[5] = CONCAT22(uStack_da,uStack_dc);
            param_1[6] = iStack_d8;
            param_1[7] = CONCAT22(uStack_d2,uStack_d4);
            *param_1 = local_f0;
            param_1[1] = CONCAT22(uStack_ea,uStack_ec);
            param_1[2] = iStack_e8;
            param_1[3] = CONCAT22(uStack_e2,uStack_e4);
            *(char **)(param_1 + 0xe) = "Computing result of process transition";
            param_1[0x10] = 0x26;
            param_1[0x11] = 0;
          }
                    /* try { // try from 001618fc to 00161908 has its CatchHandler @ 00161933 */
          _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17h1515c5d0d295c3c5E(local_68);
        }
        else {
          *(ulong *)(param_1 + 10) = CONCAT26(uStack_c2,local_c8);
          *(ulong *)(param_1 + 0xc) = CONCAT26(uStack_ba,uStack_c0);
          iStack_44 = iStack_e8;
          iStack_3c = iStack_e0;
          param_1[9] = CONCAT22(uStack_ca,uStack_cc);
          *(ulong *)(param_1 + 5) = CONCAT44(iStack_d8,CONCAT22(uStack_da,uStack_dc));
          *(ulong *)(param_1 + 7) = CONCAT44(iStack_d0,CONCAT22(uStack_d2,uStack_d4));
          param_1[1] = CONCAT22(uStack_ea,uStack_ec);
          param_1[2] = iStack_e8;
          param_1[3] = CONCAT22(uStack_e2,uStack_e4);
          param_1[4] = iStack_e0;
          *param_1 = local_f0;
          *(char **)(param_1 + 0xe) = "Getting security context of the current process";
          param_1[0x10] = 0x2f;
          param_1[0x11] = 0;
        }
        _ZN4core3ptr45drop_in_place_LT_selinux__SecurityContext_GT_17h1515c5d0d295c3c5E(local_b8);
      }
    }
    else {
      *(ulong *)(param_1 + 0xc) = CONCAT26(uStack_ba,uStack_c0);
      *(ulong *)(param_1 + 8) = CONCAT26(uStack_ca,CONCAT24(uStack_cc,iStack_d0));
      *(ulong *)(param_1 + 10) = CONCAT26(uStack_c2,local_c8);
      *(ulong *)(param_1 + 4) = CONCAT26(uStack_da,CONCAT24(uStack_dc,iStack_e0));
      *(ulong *)(param_1 + 6) = CONCAT26(uStack_d2,CONCAT24(uStack_d4,iStack_d8));
      *(ulong *)param_1 = CONCAT26(uStack_ea,CONCAT24(uStack_ec,local_f0));
      *(ulong *)(param_1 + 2) = CONCAT26(uStack_e2,CONCAT24(uStack_e4,iStack_e8));
      *(char **)(param_1 + 0xe) = "Getting security context of command file";
      param_1[0x10] = 0x28;
      param_1[0x11] = 0;
    }
  }
  else {
    *(undefined2 *)((long)param_1 + 0x36) = uStack_ba;
    *(ulong *)((long)param_1 + 0x26) = CONCAT62(local_c8,uStack_ca);
    *(ulong *)((long)param_1 + 0x2e) = CONCAT62(uStack_c0,uStack_c2);
    *(ulong *)((long)param_1 + 0x16) = CONCAT26(uStack_d4,CONCAT42(iStack_d8,uStack_da));
    *(ulong *)((long)param_1 + 0x1e) = CONCAT26(uStack_cc,CONCAT42(iStack_d0,uStack_d2));
    *(ulong *)((long)param_1 + 6) = CONCAT26(uStack_e4,CONCAT42(iStack_e8,uStack_ea));
    *(ulong *)((long)param_1 + 0xe) = CONCAT26(uStack_dc,CONCAT42(iStack_e0,uStack_e2));
    *param_1 = local_f0;
    *(undefined2 *)(param_1 + 1) = uStack_ec;
    *(char **)(param_1 + 0xe) = "Getting process security class";
    param_1[0x10] = 0x1e;
    param_1[0x11] = 0;
  }
  return;
}