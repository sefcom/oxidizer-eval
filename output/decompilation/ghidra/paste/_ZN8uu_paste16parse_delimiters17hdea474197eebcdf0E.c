void _ZN8uu_paste16parse_delimiters17hdea474197eebcdf0E
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined uVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_EDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined auVar4 [16];
  undefined4 local_bc;
  undefined **local_b8;
  undefined **ppuStack_b0;
  long **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  code *local_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_bc = 0;
  local_58 = param_2;
  local_50 = param_3;
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17hed2ab512317b9dcaE(&local_b8,param_3,0);
  if (local_b8 != (undefined **)0x0) {
    uVar3 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(ppuStack_b0,local_a8);
                    /* catch() { ... } // from try @ 001ac403 with catch @ 001ac47b */
                    /* catch() { ... } // from try @ 001ac310 with catch @ 001ac47d */
                    /* try { // try from 001ac480 to 001ac489 has its CatchHandler @ 001ac492 */
    _ZN4core3ptr81drop_in_place_LT_alloc__vec__Vec_LT_alloc__boxed__Box_LT__u5b_u8_u5d__GT__GT__GT_17h360947c94bee4ecbE
              (&local_80);
    _Unwind_Resume(uVar3);
    return;
  }
  local_80 = ppuStack_b0;
  uStack_78 = local_a8;
  local_70 = 0;
  local_60 = param_3 + param_2;
  local_68 = param_2;
  iVar2 = _ZN4core3str11validations15next_code_point17h67e93eb2e3817b3cE(&local_68);
  if (iVar2 != 0) {
    uVar3 = extraout_RDX;
    do {
      if ((int)uVar3 == 0x5c) {
        iVar2 = _ZN4core3str11validations15next_code_point17h67e93eb2e3817b3cE(&local_68);
        if (iVar2 == 0) {
          local_48 = &local_58;
          local_40 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c7e3763925384efE;
          local_b8 = &PTR_s_delimiter_list_ends_with_an_unes_00213558;
          ppuStack_b0 = (undefined **)0x1;
          local_98 = 0;
          local_a8 = &local_48;
          local_a0 = 1;
                    /* try { // try from 001ac403 to 001ac440 has its CatchHandler @ 001ac47b */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17he6dc542b829026a4E(local_38,&local_b8);
          local_a0 = CONCAT44(local_a0._4_4_,1);
          local_a8 = (long **)local_28;
          uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5c05caca195ee6c7E(&local_b8);
          param_1[1] = uVar3;
          param_1[2] = &
                       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7f73f0ae830bcf69E_002135a0
          ;
          *param_1 = 1;
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__Vec_LT_alloc__boxed__Box_LT__u5b_u8_u5d__GT__GT__GT_17h360947c94bee4ecbE
                    (&local_80);
          return;
        }
        if (extraout_EDX < 0x6e) {
          if (extraout_EDX == 0x30) {
            uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfdd8bc0d64dc9dfbE();
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hacd10739b9a3e208E(&local_80,uVar3,0);
            goto LAB_001ac31b;
          }
          uVar1 = 0x5c;
          if (extraout_EDX != 0x5c) goto LAB_001ac310;
        }
        else if (extraout_EDX == 0x6e) {
          uVar1 = 10;
        }
        else {
          if (extraout_EDX != 0x74) goto LAB_001ac310;
          uVar1 = 9;
        }
        _ZN8uu_paste16parse_delimiters34add_one_byte_single_char_delimiter17h0e699944cdb285e0E
                  (&local_80,uVar1);
      }
      else {
LAB_001ac310:
                    /* try { // try from 001ac310 to 001ac37e has its CatchHandler @ 001ac47d */
        _ZN8uu_paste16parse_delimiters28__u7b__u7b_closure_u7d__u7d_17h701ecf4682e0258cE
                  (&local_bc,&local_80);
      }
LAB_001ac31b:
      iVar2 = _ZN4core3str11validations15next_code_point17h67e93eb2e3817b3cE(&local_68);
      uVar3 = extraout_RDX_00;
    } while (iVar2 != 0);
  }
  local_a8 = (long **)local_70;
  local_b8 = local_80;
  ppuStack_b0 = (undefined **)uStack_78;
  auVar4 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17h4387899d6ce3dba8E(&local_b8);
  *(undefined (*) [16])(param_1 + 1) = auVar4;
  *param_1 = 0;
  return;
}