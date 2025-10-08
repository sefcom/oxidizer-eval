void _ZN2fd3run17h62123af0cd2476eeE(undefined *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined **local_888;
  long local_880;
  long local_878;
  undefined8 local_870;
  long local_868 [3];
  long local_850;
  long local_848;
  undefined8 local_840;
  long local_838;
  long local_830;
  undefined8 local_828;
  undefined8 local_820;
  long local_818;
  long local_810;
  undefined8 local_808;
  long *plStack_800;
  undefined *local_7f0;
  long local_620;
  long local_618;
  undefined8 local_610 [61];
  undefined local_428 [136];
  undefined local_3a0 [72];
  long local_358;
  long local_350;
  long local_348 [35];
  undefined4 local_230;
  long local_228;
  long local_220;
  undefined local_218 [458];
  undefined local_4e;
  
  _ZN12clap_builder6derive6Parser5parse17h32264ccf2408ce86E(local_428);
                    /* try { // try from 002fa258 to 002fa2c9 has its CatchHandler @ 002fa692 */
  _ZN2fd3cli4Opts15gen_completions17ha22721d6f5bedfacE(&local_820,local_230);
  lVar6 = local_818;
  if ((char)local_820 != '\x01') {
    if (local_820._1_1_ != '\x05') {
                    /* try { // try from 002fa5be to 002fa5c8 has its CatchHandler @ 002fa692 */
      _ZN2fd17print_completions17h77f7606377b2c54fE(param_1,local_820._1_1_);
      goto LAB_002fa299;
    }
    lVar6 = _ZN2fd15set_working_dir17h861a2d37c6d30c19E(local_428);
    if (lVar6 == 0) {
      _ZN2fd3cli4Opts12search_paths17h2cf17b02bfc6ed81E(&local_820,local_428);
      lVar2 = local_810;
      lVar6 = local_818;
      local_888 = local_820;
      local_880 = local_818;
      local_878 = local_810;
      if (local_810 == 0) {
        local_820 = &PTR_s_No_valid_search_paths_given__005027c8;
        local_818 = 1;
        local_810 = 8;
        local_808 = 0;
        plStack_800 = (long *)0x0;
                    /* try { // try from 002fa5fd to 002fa606 has its CatchHandler @ 002fa670 */
        lVar7 = _ZN6anyhow9__private10format_err17hb7ed131eb83ec9a9E(&local_820);
      }
      else {
                    /* try { // try from 002fa305 to 002fa314 has its CatchHandler @ 002fa670 */
        lVar7 = _ZN2fd35ensure_search_pattern_is_not_a_path17ha1d173ccdd2458aeE(local_428);
        if (lVar7 == 0) {
          local_870 = 0;
          local_868[0] = 8;
          plVar10 = &local_350;
          if (local_358 == -0x8000000000000000) {
            plVar10 = local_868;
          }
          local_868[1] = 0;
          plVar8 = local_348;
          if (local_358 == -0x8000000000000000) {
            plVar8 = local_868 + 1;
          }
          _ZN4core4iter6traits8iterator8Iterator5chain17hd72108e190f6ac58E
                    (&local_820,*plVar10,*plVar10 + *plVar8 * 0x18,local_3a0);
                    /* try { // try from 002fa3aa to 002fa3b9 has its CatchHandler @ 002fa649 */
          local_7f0 = local_428;
          _ZN4core4iter6traits8iterator8Iterator7collect17h8b4159608f2d9f3dE(&local_620,&local_820);
          uVar5 = local_610[0];
          lVar9 = local_618;
          lVar7 = local_620;
          if (local_620 == -0x8000000000000000) {
            *(long *)(param_1 + 8) = local_618;
            *param_1 = 1;
          }
          else {
            local_850 = local_620;
            local_848 = local_618;
            local_840 = local_610[0];
            (*(code *)PTR_memcpy_0053fd28)(&local_820,local_428,0x200);
                    /* try { // try from 002fa410 to 002fa42c has its CatchHandler @ 002fa62f */
            local_868[2] = uVar5;
            _ZN2fd16construct_config17h2c794a0edf9679a6E(&local_620,&local_820,lVar9,uVar5);
            lVar4 = local_618;
            lVar3 = local_620;
            if (local_620 == 2) {
              *(long *)(param_1 + 8) = local_618;
              *param_1 = 1;
            }
            else {
              (*(code *)PTR_memcpy_0053fd28)(local_218,local_610,0x1e8);
              local_228 = lVar3;
              local_220 = lVar4;
                    /* try { // try from 002fa49c to 002fa4fa has its CatchHandler @ 002fa613 */
              lVar9 = _ZN2fd48ensure_use_hidden_option_for_leading_dot_pattern17he1bd7dd292972766E
                                (local_4e,lVar9,local_868[2]);
              if (lVar9 == 0) {
                _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h77ffe7469255444cE
                          (&local_820,&local_850);
                plStack_800 = &local_228;
                _ZN4core4iter6traits8iterator8Iterator7collect17h8c7ebd478fb1054fE
                          (&local_620,&local_820);
                if (local_620 != -0x8000000000000000) {
                  local_838 = local_620;
                  local_830 = local_618;
                  local_828 = local_610[0];
                  (*(code *)PTR_memcpy_0053fd28)(&local_820,&local_228,0x1f8);
                    /* try { // try from 002fa58f to 002fa5a4 has its CatchHandler @ 002fa60c */
                  _ZN2fd4walk4scan17h6e1e68bc5996d927E(param_1,lVar6,lVar2,&local_838,&local_820);
                  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h39b8e68a66044806E
                            (&local_870);
                  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h3587c287637d2d82E
                            (&local_888);
                  return;
                }
                bVar1 = false;
              }
              else {
                bVar1 = true;
                local_618 = lVar9;
              }
              *(long *)(param_1 + 8) = local_618;
              *param_1 = 1;
                    /* try { // try from 002fa51d to 002fa529 has its CatchHandler @ 002fa62f */
              _ZN4core3ptr39drop_in_place_LT_fd__config__Config_GT_17hfe087d4ad1c35932E(&local_228);
              if (!bVar1) goto LAB_002fa53b;
            }
            _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h39b8e68a66044806E
                      (&local_850);
          }
LAB_002fa53b:
          _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h39b8e68a66044806E
                    (&local_870);
          _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h3587c287637d2d82E
                    (&local_888);
          if (lVar7 != -0x8000000000000000) {
            return;
          }
          goto LAB_002fa299;
        }
      }
      *(long *)(param_1 + 8) = lVar7;
      *param_1 = 1;
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h3587c287637d2d82E
                (&local_888);
      goto LAB_002fa299;
    }
  }
  *(long *)(param_1 + 8) = lVar6;
  *param_1 = 1;
LAB_002fa299:
  _ZN4core3ptr34drop_in_place_LT_fd__cli__Opts_GT_17h8f24d8296db52e21E(local_428);
  return;
}