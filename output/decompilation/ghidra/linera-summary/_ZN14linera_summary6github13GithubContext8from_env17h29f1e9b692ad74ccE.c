void _ZN14linera_summary6github13GithubContext8from_env17h29f1e9b692ad74ccE
               (long *param_1,char param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  long lVar3;
  byte *pbVar4;
  undefined **local_1b0;
  long local_1a8;
  long local_1a0;
  undefined **local_198;
  long lStack_190;
  long local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  undefined **local_158;
  long lStack_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined **ppuStack_128;
  long lStack_120;
  long lStack_118;
  undefined **local_110;
  long lStack_108;
  long local_100;
  byte local_f8 [8];
  undefined **local_f0;
  long local_e8;
  long local_e0;
  undefined **local_d8;
  long lStack_d0;
  long local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  byte local_a0 [8];
  undefined **local_98;
  long local_90;
  long local_88;
  byte local_80 [8];
  undefined **local_78;
  long local_70;
  long local_68;
  byte local_60 [8];
  undefined **local_58;
  long local_50;
  long local_48;
  char local_40 [8];
  long local_38;
  
  _ZN3std3env3var17h3e0bd6d3c4a94666E(local_80,"GITHUB_PR_COMMIT_HASH",0x15);
                    /* try { // try from 00618b95 to 00618bad has its CatchHandler @ 00619186 */
  _ZN3std3env3var17h3e0bd6d3c4a94666E(local_a0,&DAT_00233760,0x10);
                    /* try { // try from 00618bae to 00618bc6 has its CatchHandler @ 00619166 */
  _ZN3std3env3var17h3e0bd6d3c4a94666E(local_f8,"GITHUB_BASE_BRANCH",0x12);
                    /* try { // try from 00618bc7 to 00618bdf has its CatchHandler @ 00619149 */
  _ZN3std3env3var17h3e0bd6d3c4a94666E(local_60,&DAT_002328a0,0x10);
  if (param_2 == '\0') {
    if ((local_60[0] & 1) == 0) {
      if (local_58 != (undefined **)0x8000000000000000) {
        local_1b0 = local_58;
        local_1a8 = local_50;
        local_1a0 = local_48;
        if ((local_80[0] & 1) == 0) {
          if (local_78 != (undefined **)0x8000000000000000) {
            local_198 = local_78;
            lStack_190 = local_70;
            local_188 = local_68;
            if ((local_a0[0] & 1) == 0) {
              if (local_98 != (undefined **)0x8000000000000000) {
                local_178 = local_98;
                uStack_170 = local_90;
                local_168 = local_88;
                if ((local_f8[0] & 1) == 0) {
                  if (local_f0 != (undefined **)0x8000000000000000) {
                    local_140 = local_f0;
                    uStack_138 = local_e8;
                    local_130 = local_e0;
                    _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
                              (local_40);
                    if (local_40[0] != '\0') {
                    /* try { // try from 00618f73 to 00618f7c has its CatchHandler @ 00619081 */
                      lVar3 = _ZN14linera_summary6github13GithubContext8from_env28__u7b__u7b_closure_u7d__u7d_17hcd2c7dff49a99ffdE
                                        (&local_1b0);
                      param_1[1] = lVar3;
                      *param_1 = -0x8000000000000000;
                      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE
                                (&local_140);
                      goto LAB_00618f1c;
                    }
                    local_158 = local_198;
                    lStack_150 = lStack_190;
                    local_148 = local_188;
                    local_d8 = local_178;
                    lStack_d0 = uStack_170;
                    local_c8 = local_168;
                    local_b8 = (undefined4)local_140;
                    uStack_b4 = local_140._4_4_;
                    uStack_b0 = (undefined4)uStack_138;
                    uStack_ac = uStack_138._4_4_;
                    local_a8 = local_130;
                    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE
                              (&local_1b0);
                    bVar1 = false;
                    param_4 = local_38;
                    goto LAB_00618d00;
                  }
                }
                else {
                    /* try { // try from 00618f06 to 00618f0d has its CatchHandler @ 00619090 */
                  local_e8 = _ZN14linera_summary6github13GithubContext8from_env28__u7b__u7b_closure_u7d__u7d_17h532f0ddf02f56a57E
                                       (local_f0,local_e8);
                }
                param_1[1] = local_e8;
                *param_1 = -0x8000000000000000;
LAB_00618f1c:
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE
                          (&local_178);
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE
                          (&local_198);
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE
                          (&local_1b0);
                return;
              }
            }
            else {
                    /* try { // try from 00618e9e to 00618ea5 has its CatchHandler @ 006190b9 */
              local_90 = _ZN14linera_summary6github13GithubContext8from_env28__u7b__u7b_closure_u7d__u7d_17hc9916c8c7572eccaE
                                   (local_98,local_90);
            }
            param_1[1] = local_90;
            *param_1 = -0x8000000000000000;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_198)
            ;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_1b0)
            ;
            pbVar4 = local_f8;
            goto LAB_00618dee;
          }
        }
        else {
                    /* try { // try from 00618e36 to 00618e3d has its CatchHandler @ 006190d7 */
          local_70 = _ZN14linera_summary6github13GithubContext8from_env28__u7b__u7b_closure_u7d__u7d_17hdfd2e22182276cd9E
                               (local_78,local_70);
        }
        param_1[1] = local_70;
        *param_1 = -0x8000000000000000;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_1b0);
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h68b9d0ec30e79c0fE
                  (local_f8);
        pbVar4 = local_a0;
        goto LAB_00618dee;
      }
    }
    else {
      local_50 = _ZN14linera_summary6github13GithubContext8from_env28__u7b__u7b_closure_u7d__u7d_17hbf4caff02bc01d60E
                           ();
    }
    param_1[1] = local_50;
    *param_1 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 00618bf2 to 00618c3b has its CatchHandler @ 00619118 */
    _ZN14linera_summary6github13GithubContext18get_local_git_info17h57dc8e6f5dcc2bb3E(&local_140);
    if (local_140 == (undefined **)0x8000000000000000) {
      param_1[1] = uStack_138;
      *param_1 = -0x8000000000000000;
    }
    else {
      local_188 = lStack_118;
      local_198 = ppuStack_128;
      lStack_190 = lStack_120;
      local_168 = local_100;
      local_178 = local_110;
      ppuVar2 = local_178;
      uStack_170 = lStack_108;
      lVar3 = uStack_170;
      local_1b0 = local_140;
      local_1a8 = uStack_138;
      local_1a0 = local_130;
      if ((param_3 & 1) == 0) {
        local_140 = &PTR_s_pr_number_is_None_009f3470;
        uStack_138 = 1;
        local_130 = 8;
        ppuStack_128 = (undefined **)0x0;
        lStack_120 = 0;
                    /* try { // try from 00619024 to 0061902d has its CatchHandler @ 00619058 */
        lVar3 = _ZN6anyhow9__private10format_err17hb7ed131eb83ec9a9E(&local_140);
        param_1[1] = lVar3;
        *param_1 = -0x8000000000000000;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_178);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_198);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_1b0);
      }
      else {
        local_148 = local_130;
        local_158 = local_140;
        lStack_150 = uStack_138;
        local_d8 = ppuStack_128;
        lStack_d0 = lStack_120;
        local_c8 = lStack_118;
        local_178._0_4_ = SUB84(local_110,0);
        local_178._4_4_ = (undefined4)((ulong)local_110 >> 0x20);
        uStack_170._0_4_ = (undefined4)lStack_108;
        uStack_170._4_4_ = (undefined4)((ulong)lStack_108 >> 0x20);
        local_b8 = (undefined4)local_178;
        uStack_b4 = local_178._4_4_;
        uStack_b0 = (undefined4)uStack_170;
        uStack_ac = uStack_170._4_4_;
        local_a8 = local_100;
        bVar1 = true;
        local_178 = ppuVar2;
        uStack_170 = lVar3;
LAB_00618d00:
                    /* try { // try from 00618d00 to 00618d0d has its CatchHandler @ 006190ec */
        _ZN14linera_summary6github16GithubRepository8from_env17hd99f4e9b5b48b078E
                  (&local_140,param_2);
        if (local_140 == (undefined **)0x8000000000000000) {
          param_1[1] = uStack_138;
          *param_1 = -0x8000000000000000;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_b8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_d8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_158);
        }
        else {
          param_1[4] = lStack_120;
          param_1[5] = lStack_118;
          param_1[2] = local_130;
          param_1[3] = (long)ppuStack_128;
          param_1[8] = local_148;
          param_1[6] = (long)local_158;
          param_1[7] = lStack_150;
          param_1[0xb] = local_c8;
          param_1[9] = (long)local_d8;
          param_1[10] = lStack_d0;
          *(undefined4 *)(param_1 + 0xc) = local_b8;
          *(undefined4 *)((long)param_1 + 100) = uStack_b4;
          *(undefined4 *)(param_1 + 0xd) = uStack_b0;
          *(undefined4 *)((long)param_1 + 0x6c) = uStack_ac;
          param_1[0xe] = local_a8;
          *param_1 = (long)local_140;
          param_1[1] = uStack_138;
          param_1[0xf] = param_4;
        }
        if (!bVar1) {
          return;
        }
      }
    }
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h68b9d0ec30e79c0fE
              (local_60);
  }
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h68b9d0ec30e79c0fE
            (local_f8);
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h68b9d0ec30e79c0fE
            (local_a0);
  pbVar4 = local_80;
LAB_00618dee:
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h68b9d0ec30e79c0fE
            (pbVar4);
  return;
}