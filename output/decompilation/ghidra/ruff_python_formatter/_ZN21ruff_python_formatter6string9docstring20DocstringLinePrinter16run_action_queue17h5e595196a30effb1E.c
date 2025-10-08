void _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter16run_action_queue17h5e595196a30effb1E
               (int *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int local_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  ulong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 local_228;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  undefined8 local_1e8;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  int local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  ulong local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long local_d0 [4];
  int local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  long local_98 [4];
  long local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h29d219b469b29382E(&local_120);
  if (local_120 != 0x8000000000000007) {
    local_150 = 0x8000000000000007;
    local_1c0 = 0x8000000000000006;
    do {
      uVar6 = local_100;
      uVar7 = local_108;
      uVar5 = local_110;
      uVar4 = local_118;
      uVar3 = local_120;
      switch(local_120) {
      case 0x8000000000000003:
        uStack_240 = local_118;
        uStack_238 = local_110;
        uStack_230._0_5_ = CONCAT14(local_108 == 0,local_f8);
                    /* try { // try from 00423001 to 00423018 has its CatchHandler @ 004239a6 */
        local_248 = 0x8000000000000000;
        _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
                  (&local_1b8,param_2,&local_248);
        if ((int)local_1b8 != 4) {
          *(ulong *)(param_1 + 4) = local_1a8;
          *param_1 = (int)local_1b8;
          param_1[1] = local_1b8._4_4_;
          param_1[2] = (int)uStack_1b0;
          param_1[3] = uStack_1b0._4_4_;
          _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                    (&local_248);
          return;
        }
        _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                  (&local_248);
        break;
      case 0x8000000000000004:
        break;
      default:
        local_190 = CONCAT44(uStack_f4,local_f8);
        local_1b8 = local_120;
        uStack_1b0 = local_118;
        local_1a8 = local_110;
        local_1a0 = local_108;
        local_198 = local_100;
        local_178 = local_e0;
        uStack_174 = uStack_dc;
        uStack_170 = uStack_d8;
        uStack_16c = uStack_d4;
        local_188 = local_f0;
        uStack_184 = uStack_ec;
        uStack_180 = uStack_e8;
        uStack_17c = uStack_e4;
                    /* try { // try from 004230ab to 004230bf has its CatchHandler @ 004239bb */
        _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter6format17h14b7da932fffcf32E
                  (&local_248,param_2,&local_1b8);
        local_278 = (int)uStack_240;
        iStack_274 = uStack_240._4_4_;
        iStack_270 = (int)uStack_238;
        iStack_26c = uStack_238._4_4_;
        local_268 = uStack_230;
        uVar8 = uVar3 ^ 0x8000000000000000;
        if ((int)local_248 == 1) {
          *(ulong *)(param_1 + 4) = uStack_230;
          *param_1 = (int)uStack_240;
          param_1[1] = uStack_240._4_4_;
          param_1[2] = (int)uStack_238;
          param_1[3] = uStack_238._4_4_;
          bVar1 = true;
          bVar2 = true;
LAB_00423817:
          uVar7 = 1;
          if (uVar8 < 3) {
            uVar7 = uVar8;
          }
          if (uVar7 == 0) {
            _ZN4core3ptr78drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleKind_GT_17hfa4bbf45bb7293b2E
                      (&local_1b8);
            return;
          }
          if (uVar7 != 1) {
            if (!bVar2) {
              return;
            }
            _ZN4core3ptr77drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT_17h11ac36d5a928c787E
                      (uVar4,uVar5);
            return;
          }
          if (!bVar1) {
            return;
          }
          _ZN4core3ptr77drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT_17h11ac36d5a928c787E
                    (uVar3,uVar4);
          return;
        }
        uVar9 = 1;
        if (uVar8 < 3) {
          uVar9 = uVar8;
        }
        if (uStack_240 == 0x8000000000000000) {
          _ZN4core3ptr133drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT__GT_17h4f3fad6946a4b51aE
                    (&local_278);
          if (uVar9 == 0) {
            uStack_240 = uVar4;
            uStack_238 = uVar5;
            uStack_230 = uVar7;
            local_248 = local_1c0;
            _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_10push_front17h39612c55eca94b62E
                      (param_2,&local_248);
          }
          else {
            if (uVar9 == 1) {
              uStack_240 = uVar3;
              uStack_238 = uVar4;
              uStack_230 = uVar5;
            }
            else {
              uStack_240 = uVar4;
              uStack_238 = uVar5;
              uStack_230 = uVar7;
            }
            local_248 = local_1c0;
            _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_10push_front17h39612c55eca94b62E
                      (param_2,&local_248);
          }
          break;
        }
        local_158 = uStack_230;
        local_168 = (int)uStack_240;
        iStack_164 = uStack_240._4_4_;
        iStack_160 = (int)uStack_238;
        iStack_15c = uStack_238._4_4_;
        *(undefined *)(param_2 + 0x94) = 0;
        if (uVar9 == 0) {
          local_148 = uVar6;
          local_140 = local_190;
          local_250 = uVar8;
          _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb1e994610509fcbdE
                    (&local_1e0,&local_168);
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45ed2e8455f9e79aE
                    (&local_248,&local_1e0);
          if (local_248 != 0x8000000000000001) {
            local_48 = (int)uStack_238;
            uStack_44 = uStack_238._4_4_;
            uStack_40 = (undefined4)uStack_230;
            uStack_3c = uStack_230._4_4_;
            local_58 = (int)local_248;
            uStack_54 = local_248._4_4_;
            uStack_50 = (int)uStack_240;
            uStack_4c = uStack_240._4_4_;
                    /* try { // try from 004235b4 to 004235cb has its CatchHandler @ 004238d5 */
            _ZN21ruff_python_formatter6string9docstring19OutputDocstringLine3map17h61f9e6bc8ed1728aE
                      (&local_248,&local_58,&local_148);
                    /* try { // try from 004235d1 to 004235e0 has its CatchHandler @ 004238c6 */
            _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
                      (&local_278,param_2,&local_248);
            if (local_278 != 4) {
              param_1[5] = local_268._4_4_;
              param_1[1] = iStack_274;
              param_1[2] = iStack_270;
              param_1[3] = iStack_26c;
              param_1[4] = (int)local_268;
              *param_1 = local_278;
              _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                        (&local_248);
                    /* try { // try from 00423896 to 004238a2 has its CatchHandler @ 004238a8 */
              _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                        (&local_1e0);
LAB_0042380e:
              bVar1 = true;
              bVar2 = true;
              uVar8 = local_250;
              goto LAB_00423817;
            }
            _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                      (&local_248);
            local_268 = CONCAT44(iStack_1cc,local_1d0);
            uStack_260 = uStack_1c8;
            local_278 = local_1e0;
            iStack_274 = iStack_1dc;
            iStack_270 = iStack_1d8;
            iStack_26c = iStack_1d4;
            while( true ) {
              _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45ed2e8455f9e79aE
                        (local_d0,&local_278);
              if (local_d0[0] == -0x7fffffffffffffff) break;
                    /* try { // try from 0042363f to 00423651 has its CatchHandler @ 00423951 */
              _ZN21ruff_python_formatter6string9docstring19OutputDocstringLine3map17h9dd91d6366b18a43E
                        (&local_248,local_d0,&local_148);
                    /* try { // try from 00423652 to 00423664 has its CatchHandler @ 00423942 */
              _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
                        (&local_1f8,param_2,&local_248);
              if (local_1f8 != 4) {
                param_1[5] = local_1e8._4_4_;
                param_1[1] = iStack_1f4;
                param_1[2] = iStack_1f0;
                param_1[3] = iStack_1ec;
                param_1[4] = (int)local_1e8;
                *param_1 = local_1f8;
                _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                          (&local_248);
                    /* try { // try from 00423804 to 0042380d has its CatchHandler @ 004238aa */
                _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                          (&local_278);
                goto LAB_0042380e;
              }
              _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                        (&local_248);
            }
                    /* try { // try from 00423684 to 0042368d has its CatchHandler @ 004238bc */
            _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                      (&local_278);
            goto LAB_0042368e;
          }
          _ZN4core3ptr110drop_in_place_LT_core__option__Option_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h7f73ad1ad19295cbE
                    (&local_248);
                    /* try { // try from 00423322 to 00423329 has its CatchHandler @ 00423907 */
          _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                    (&local_1e0);
        }
        else {
          if (uVar9 == 1) {
            if (local_188 == 5) {
              _ZN4core3ptr77drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT_17h11ac36d5a928c787E
                        (uVar3,uVar4);
              _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17hc9fb56ca0f28a6bcE
                        (&local_168);
              break;
            }
            local_b0 = local_188;
            local_9c = uStack_dc;
            local_ac = uStack_ec;
            uStack_a8 = uStack_e8;
            uStack_a4 = uStack_e4;
            uStack_a0 = local_e0;
            local_250 = uVar8;
            uVar6 = _ZN21ruff_python_formatter6string9docstring11Indentation7columns17h9e266497152669caE
                              (&local_b0);
                    /* try { // try from 004234a2 to 004234ae has its CatchHandler @ 004238f0 */
            _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h7a2733b42d32c749E
                      (&local_248,uVar6);
            local_1e8 = uStack_238;
            local_1f8 = (int)local_248;
            iStack_1f4 = local_248._4_4_;
            iStack_1f0 = (int)uStack_240;
            iStack_1ec = uStack_240._4_4_;
            _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb1e994610509fcbdE
                      (&local_278,&local_168);
            _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45ed2e8455f9e79aE
                      (local_98,&local_278);
            while (local_98[0] != -0x7fffffffffffffff) {
                    /* try { // try from 00423510 to 00423522 has its CatchHandler @ 00423978 */
              _ZN21ruff_python_formatter6string9docstring19OutputDocstringLine3map17h478fa21ff20c0528E
                        (&local_248,local_98,&local_1f8);
                    /* try { // try from 00423523 to 00423535 has its CatchHandler @ 00423969 */
              _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
                        (&local_1e0,param_2,&local_248);
              if (local_1e0 != 4) {
                param_1[5] = iStack_1cc;
                param_1[1] = iStack_1dc;
                param_1[2] = iStack_1d8;
                param_1[3] = iStack_1d4;
                param_1[4] = local_1d0;
                *param_1 = local_1e0;
                _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                          (&local_248);
                    /* try { // try from 004237b4 to 004237bd has its CatchHandler @ 004238ac */
                _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                          (&local_278);
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE
                          (&local_1f8);
                _ZN4core3ptr77drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT_17h11ac36d5a928c787E
                          (uVar3,uVar4);
                bVar2 = true;
                bVar1 = false;
                uVar8 = local_250;
                goto LAB_00423817;
              }
              _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                        (&local_248);
              _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45ed2e8455f9e79aE
                        (local_98,&local_278);
            }
                    /* try { // try from 00423572 to 0042357b has its CatchHandler @ 004238be */
            _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                      (&local_278);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_1f8)
            ;
            _ZN4core3ptr77drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT_17h11ac36d5a928c787E
                      (uVar3,uVar4);
          }
          else {
            local_250 = uVar8;
            uVar6 = _ZN21ruff_python_formatter6string9docstring11Indentation7columns17h9e266497152669caE
                              (&local_198);
                    /* try { // try from 00423379 to 00423385 has its CatchHandler @ 0042391a */
            _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h7a2733b42d32c749E
                      (&local_248,uVar6);
            local_1e8 = uStack_238;
            local_1f8 = (int)local_248;
            iStack_1f4 = local_248._4_4_;
            iStack_1f0 = (int)uStack_240;
            iStack_1ec = uStack_240._4_4_;
            _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb1e994610509fcbdE
                      (&local_278,&local_168);
            _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45ed2e8455f9e79aE
                      (local_78,&local_278);
            while (local_78[0] != -0x7fffffffffffffff) {
                    /* try { // try from 004233e0 to 004233f2 has its CatchHandler @ 004239e2 */
              _ZN21ruff_python_formatter6string9docstring19OutputDocstringLine3map17h478fa21ff20c0528E
                        (&local_248,local_78,&local_1f8);
                    /* try { // try from 004233f3 to 00423405 has its CatchHandler @ 004239d3 */
              _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
                        (&local_1e0,param_2,&local_248);
              if (local_1e0 != 4) {
                param_1[5] = iStack_1cc;
                param_1[1] = iStack_1dc;
                param_1[2] = iStack_1d8;
                param_1[3] = iStack_1d4;
                param_1[4] = local_1d0;
                *param_1 = local_1e0;
                _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                          (&local_248);
                    /* try { // try from 00423715 to 0042371e has its CatchHandler @ 004238b4 */
                _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                          (&local_278);
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE
                          (&local_1f8);
                _ZN4core3ptr77drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT_17h11ac36d5a928c787E
                          (uVar4,uVar5);
                bVar1 = true;
                bVar2 = false;
                uVar8 = local_250;
                goto LAB_00423817;
              }
              _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                        (&local_248);
              _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45ed2e8455f9e79aE
                        (local_78,&local_278);
            }
                    /* try { // try from 00423442 to 0042344b has its CatchHandler @ 00423912 */
            _ZN4core3ptr121drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT__GT_17h55c79ba7f6b3f324E
                      (&local_278);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_1f8)
            ;
            _ZN4core3ptr77drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT_17h11ac36d5a928c787E
                      (uVar4,uVar5);
          }
LAB_0042368e:
          if (uVar3 != 0x8000000000000000) break;
        }
        _ZN4core3ptr78drop_in_place_LT_ruff_python_formatter__string__docstring__CodeExampleKind_GT_17hfa4bbf45bb7293b2E
                  (&local_1b8);
        break;
      case 0x8000000000000006:
        local_138 = local_118;
        local_130 = local_110;
        local_128 = local_108;
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hf19b7bd6dd2fcad4E
                  (&local_278,&local_138);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h93d9945f5af541e3E
                  (&local_248,&local_278);
        while (local_248 != 0) {
          uVar3 = local_1a0 >> 0x28;
          local_1a0._5_3_ = (undefined3)uVar3;
          local_1a0._0_5_ = CONCAT14(uStack_238 == 0,local_228);
                    /* try { // try from 004231e6 to 004231f8 has its CatchHandler @ 00423a76 */
          local_1b8 = 0x8000000000000000;
          uStack_1b0 = local_248;
          local_1a8 = uStack_240;
          _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
                    (&local_1e0,param_2,&local_1b8);
          if (local_1e0 != 4) {
            *(ulong *)(param_1 + 4) = CONCAT44(iStack_1cc,local_1d0);
            *param_1 = local_1e0;
            param_1[1] = iStack_1dc;
            param_1[2] = iStack_1d8;
            param_1[3] = iStack_1d4;
            _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                      (&local_1b8);
            _ZN4core3ptr117drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__CodeExampleLine_GT__GT_17hb12b9ac5d83ffed7E
                      (&local_278);
            return;
          }
          _ZN4core3ptr82drop_in_place_LT_ruff_python_formatter__string__docstring__OutputDocstringLine_GT_17h8a3d84e41a5d45bbE
                    (&local_1b8);
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h93d9945f5af541e3E
                    (&local_248,&local_278);
        }
        _ZN4core3ptr117drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_ruff_python_formatter__string__docstring__CodeExampleLine_GT__GT_17hb12b9ac5d83ffed7E
                  (&local_278);
      }
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h29d219b469b29382E
                (&local_120,param_2);
    } while (local_120 != local_150);
  }
  _ZN4core3ptr111drop_in_place_LT_core__option__Option_LT_ruff_python_formatter__string__docstring__CodeExampleAddAction_GT__GT_17hdb7bd7fb32c59f0eE
            (&local_120);
  *param_1 = 4;
  return;
}