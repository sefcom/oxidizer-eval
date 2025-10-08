void _ZN12uu_dircolors25generate_dircolors_config17h11151b3620e36f5bE(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long local_b0;
  long *local_a8;
  code *local_a0;
  long *local_98;
  code *local_90;
  long local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_50 = 0;
  uStack_48 = 1;
  local_40 = 0;
                    /* try { // try from 001696e4 to 00169713 has its CatchHandler @ 00169fa8 */
  local_38 = param_1;
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (&local_50,
             "# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n"
             ,"COLORTERM ?*\n");
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (&local_50,"COLORTERM ?*\n",
             "# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as per the following codes:\n# Attribute codes:\n# 00=none 01=bold 04=underscore 05=blink 07=reverse 08=concealed\n# Text color codes:\n# 30=black 31=red 32=green 33=yellow 34=blue 35=magenta 36=cyan 37=white\n# Background color codes:\n# 40=black 41=red 42=green 43=yellow 44=blue 45=magenta 46=cyan 47=white\n#NORMAL 00 # no color code at all\n#FILE 00 # regular file: use no color at all\n"
            );
  lVar1 = *(long *)PTR_PTR_001fe2d0;
  lVar2 = 0;
  do {
    local_b0 = lVar1 + lVar2;
    local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
    local_80 = &PTR_s_TERM_001f5f10;
    local_78 = 2;
    local_60 = 0;
    local_70 = &local_a8;
    local_68 = 1;
    local_a8 = &local_b0;
                    /* try { // try from 00169784 to 0016978e has its CatchHandler @ 00169fae */
    _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
              (&local_50,&local_80);
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1b0);
                    /* try { // try from 0016979c to 001697b3 has its CatchHandler @ 00169fa8 */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (&local_50,
             "# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as per the following codes:\n# Attribute codes:\n# 00=none 01=bold 04=underscore 05=blink 07=reverse 08=concealed\n# Text color codes:\n# 30=black 31=red 32=green 33=yellow 34=blue 35=magenta 36=cyan 37=white\n# Background color codes:\n# 40=black 41=red 42=green 43=yellow 44=blue 45=magenta 46=cyan 47=white\n#NORMAL 00 # no color code at all\n#FILE 00 # regular file: use no color at all\n"
             ,"TERM ");
  lVar1 = *(long *)PTR_PTR_001fe298;
  local_b0 = lVar1 + 0x20;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
                    /* try { // try from 00169822 to 00169e87 has its CatchHandler @ 00169faa */
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_88 = lVar1;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x30;
  local_b0 = lVar1 + 0x50;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x60;
  local_b0 = lVar1 + 0x80;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x90;
  local_b0 = lVar1 + 0xb0;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0xc0;
  local_b0 = lVar1 + 0xe0;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0xf0;
  local_b0 = lVar1 + 0x110;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x120;
  local_b0 = lVar1 + 0x140;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x150;
  local_b0 = lVar1 + 0x170;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x180;
  local_b0 = lVar1 + 0x1a0;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x1b0;
  local_b0 = lVar1 + 0x1d0;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x1e0;
  local_b0 = lVar1 + 0x200;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x210;
  local_b0 = lVar1 + 0x230;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x240;
  local_b0 = lVar1 + 0x260;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x270;
  local_b0 = lVar1 + 0x290;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x2a0;
  local_b0 = lVar1 + 0x2c0;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x2d0;
  local_b0 = lVar1 + 0x2f0;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x300;
  local_b0 = lVar1 + 800;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
  local_88 = lVar1 + 0x330;
  local_b0 = lVar1 + 0x350;
  local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
  local_80 = (undefined **)&DAT_001f5f30;
  local_78 = 3;
  local_60 = 0;
  local_68 = 2;
  local_a8 = &local_88;
  local_98 = &local_b0;
  local_70 = &local_a8;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
            (&local_50,&local_80);
                    /* try { // try from 00169e88 to 00169eba has its CatchHandler @ 00169fa8 */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (&local_50,
             "# List any file extensions like \'.gz\' or \'.tar\' that you would like ls\n"," ");
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (&local_50,"# to color below. Put the extension, a space, and the color init string.\n",
             "# Subsequent TERM or COLORTERM entries, can be used to add / override\n");
  lVar1 = *(long *)PTR_PTR_001fe2a0;
  lVar2 = 0x1040;
  do {
    local_b0 = lVar1 + 0x10;
    local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
    local_98 = &local_b0;
    local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0284718a7e282620E;
    local_80 = (undefined **)&DAT_001f5f30;
    local_78 = 3;
    local_60 = 0;
    local_70 = &local_a8;
    local_68 = 2;
    local_a8 = &local_88;
    local_88 = lVar1;
                    /* try { // try from 00169f38 to 00169f42 has its CatchHandler @ 00169fac */
    _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcfd08fbb67743b0eE
              (&local_50,&local_80);
    lVar1 = lVar1 + 0x20;
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
                    /* try { // try from 00169f4d to 00169f7c has its CatchHandler @ 00169fa8 */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (&local_50,"# Subsequent TERM or COLORTERM entries, can be used to add / override\n",
             "# config specific to those matching environment variables.");
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
            (&local_50,"# config specific to those matching environment variables.","");
  local_38[2] = local_40;
  *local_38 = local_50;
  local_38[1] = uStack_48;
  return;
}