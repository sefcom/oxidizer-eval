undefined8 _ZN4just6config6Config3app17hcb0f5449d8cb91bbE(undefined8 param_1)

{
  undefined local_ac8;
  undefined4 local_ac7;
  undefined local_ac0;
  undefined2 local_abc;
  undefined6 local_aba;
  undefined2 uStack_ab4;
  undefined6 uStack_ab2;
  undefined local_aac;
  undefined4 local_aab;
  undefined local_aa4;
  undefined2 local_aa0;
  undefined local_a9e;
  undefined4 local_a9d;
  undefined local_a96;
  undefined2 local_a92;
  undefined local_a90;
  undefined4 local_a8f;
  undefined local_a88;
  undefined2 local_a84;
  undefined local_a82;
  undefined4 local_a81;
  undefined local_a7a;
  undefined2 local_a76;
  undefined4 local_a74;
  undefined local_a70;
  undefined local_a6c;
  undefined2 local_a68;
  undefined4 local_a66;
  undefined4 uStack_a62;
  undefined4 uStack_a5e;
  undefined4 uStack_a5a;
  undefined4 uStack_a56;
  undefined4 uStack_a52;
  undefined4 uStack_a4e;
  uint local_850;
  undefined4 local_84c;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined2 local_7f0;
  uint local_5d0;
  undefined4 local_5cc;
  uint local_58c;
  undefined8 local_588;
  undefined8 local_580 [3];
  undefined local_568 [14];
  undefined6 local_55a;
  undefined2 uStack_554;
  undefined4 local_552;
  undefined2 local_54e;
  undefined4 local_506;
  undefined4 uStack_502;
  undefined4 uStack_4fe;
  undefined4 uStack_4fa;
  undefined4 uStack_4f6;
  undefined4 uStack_4f2;
  undefined4 uStack_4ee;
  uint local_2f0;
  undefined4 local_2ec;
  uint local_2ac;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  
  _ZN12clap_builder7builder7command7Command3new17h2ebd8d11f9051b0dE(local_568);
  _ZN12clap_builder7builder7command7Command8bin_name17h22dafd1fe3eb7795E(&local_848,local_568);
  _ZN12clap_builder7builder7command7Command7version17h9b2b8e3fb53d6c09E(local_568,&local_848);
  _ZN12clap_builder7builder7command7Command6author17hda0a85995c80c5c3E(&local_848,local_568);
  _ZN12clap_builder7builder7command7Command5about17hc0c3a62c49e66317E(local_568,&local_848);
  (*(code *)PTR_memcpy_00565e28)(&local_848,local_568,700);
  local_58c = local_2ac | 0x20;
  local_588 = local_2a8;
  _ZN12clap_builder7builder7styling6Styles6styled17h83f87c1cdf183aa3E(local_568);
  local_55a = 0x300000100;
  uStack_554 = 0;
  local_552 = 3;
  local_54e = 1;
  local_aba = 0x300000100;
  uStack_ab4 = 0;
  uStack_ab2 = 0x100000003;
  local_a66 = local_506;
  uStack_a62 = uStack_502;
  uStack_a5e = uStack_4fe;
  uStack_a5a = uStack_4fa;
  uStack_a56 = uStack_4f6;
  uStack_a52 = uStack_4f2;
  uStack_a4e = uStack_4ee;
  local_ac8 = 0;
  local_ac7 = 0x3000003;
  local_ac0 = 3;
  local_abc = 1;
  local_aac = 0;
  local_aab = 0x3000003;
  local_aa4 = 3;
  local_aa0 = 1;
  local_a9e = 0;
  local_a9d = 0x3000002;
  local_a96 = 3;
  local_a92 = 0;
  local_a90 = 0;
  local_a8f = 0x3000006;
  local_a88 = 3;
  local_a84 = 0;
  local_a82 = 0;
  local_a81 = 0x3000002;
  local_a7a = 3;
  local_a76 = 0;
  local_a74 = 0x100;
  local_a70 = 3;
  local_a6c = 3;
  local_a68 = 0;
  _ZN12clap_builder7builder7command7Command6styles17h7b9f888ddca5a8d1E
            (local_568,&local_848,&local_ac8);
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016ee8d,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_ac8,&local_848,&DAT_0016ee98,0xb);
                    /* try { // try from 0035c935 to 0035c9c9 has its CatchHandler @ 0035f5eb */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E
            (&local_848,&local_ac8,"JUST_ALIAS_STYLE",0x10);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h86d5c22272dbf35cE(&local_848,&local_ac8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h490e19da68f376b3E
            (&local_ac8,&local_848,&DAT_0016eea3,5);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_848,&local_ac8,&DAT_0016eea8,0x24);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (&local_ac8,&local_848,&DAT_0016eecc,10);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016eed6,7);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016eedd,7);
                    /* try { // try from 0035ca18 to 0035ca88 has its CatchHandler @ 0035f56d */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016eee4,0xc);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,0);
  local_580[0] = 3;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hba612b267e67056fE
            (local_568,&local_ac8,local_580);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016eef0,0x46);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016ef36,5);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016ef3b,5);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
                    /* try { // try from 0035caef to 0035cb21 has its CatchHandler @ 0035f408 */
  _ZN12clap_builder7builder3arg3Arg8requires17h5ae9e01375d4ebfbE
            (&local_ac8,&local_848,&DAT_0016ef40,6);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016ef46,0x87);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016efcd,7);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016efd4,7);
                    /* try { // try from 0035cb75 to 0035cbc1 has its CatchHandler @ 0035f3f3 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016efdb,0xc);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,0);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016efe7,0x25);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_00165ad0,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_ac8,&local_848,"clear-shell-args, an alias for `",0x10);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
                    /* try { // try from 0035cc2d to 0035cc5f has its CatchHandler @ 0035f3de */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hd74deb0fcb1bd1ecE
            (&local_ac8,&local_848,&DAT_0016f00c,9);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f015,0x15);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f02a,5);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f02f,5);
                    /* try { // try from 0035ccb3 to 0035cd2b has its CatchHandler @ 0035f5c7 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016f034,10);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h64a8966fe0c1500eE(local_568,&local_ac8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h490e19da68f376b3E
            (&local_ac8,local_568,&DAT_0016673c,4);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f03e,0x15);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f053,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_ac8,&local_848,&DAT_0016f060,0xd);
                    /* try { // try from 0035cd7f to 0035cddb has its CatchHandler @ 0035f558 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E
            (&local_848,&local_ac8,&DAT_0016f06d,0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h12c9d779fc95301dE(&local_848,&local_ac8);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f07f,0x24);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f0a3,7);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f0aa,7);
                    /* try { // try from 0035ce2a to 0035ceaa has its CatchHandler @ 0035f5b5 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016f0b1,0xc);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hba612b267e67056fE
            (local_568,&local_ac8,local_580);
  _ZN12clap_builder7builder3arg3Arg13default_value17h490e19da68f376b3E
            (&local_ac8,local_568,&DAT_0016f0aa,7);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f0bd,0x42);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f0ff,0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_ac8,&local_848,&DAT_0016f10e,0xf);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,0);
                    /* try { // try from 0035cf13 to 0035cf45 has its CatchHandler @ 0035f3c9 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f11d,0x45);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (&local_2a0,&local_ac8,&DAT_0016f162,0xb);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f162,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,local_568,0x45);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(local_568,&local_ac8,&DAT_0016f16d,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,0);
                    /* try { // try from 0035cfc1 to 0035cff4 has its CatchHandler @ 0035f3b4 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hba612b267e67056fE
            (local_568,&local_ac8,local_580);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016f178,0x43);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f1bb,7);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,&local_848,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_848,&local_ac8,&DAT_0016f1c2,7);
                    /* try { // try from 0035d05b to 0035d0bc has its CatchHandler @ 0035f543 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_ac8,&local_848,&DAT_0016f1c9,0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f1d5,0x29);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (&local_2a0,&local_ac8,&DAT_0016f1fe,5);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f203,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f20e,0xb)
  ;
                    /* try { // try from 0035d110 to 0035d1a4 has its CatchHandler @ 0035f5d9 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_00165b50,0x10)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h546e8d6bfac9d01bE(local_568,&local_ac8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h490e19da68f376b3E
            (&local_ac8,local_568,&DAT_00166c50,4);
  _ZN12clap_builder7builder3arg3Arg10value_name17he42040b8555a7829E
            (local_568,&local_ac8,&DAT_0016ef40,6);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016f219,0x19);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f232,7);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,2);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_848,&local_ac8,&DAT_0016f239,7);
                    /* try { // try from 0035d20b to 0035d23d has its CatchHandler @ 0035f39f */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_ac8,&local_848,&DAT_0016f240,0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f24c,0x2a);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f276,0xf);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(local_568,&local_ac8,&DAT_0016f285,0xf)
  ;
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,local_568,0x67);
                    /* try { // try from 0035d2bc to 0035d30f has its CatchHandler @ 0035f52e */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (local_568,&local_ac8,&DAT_00169018,8);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (&local_ac8,local_568,&DAT_0016f294,0x11);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f2a5,0x13);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f2b8,9);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016f2c1,9);
                    /* try { // try from 0035d363 to 0035d3ce has its CatchHandler @ 0035f519 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_848,&local_ac8,&DAT_0016f2ca,0xe)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_848,&local_ac8,&DAT_0016f2d8,0x25);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hd74deb0fcb1bd1ecE
            (&local_ac8,&local_848,&DAT_0016f2fd,0xc);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_00169018,8);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,local_568,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(local_568,&local_ac8,&DAT_00169778,8);
                    /* try { // try from 0035d435 to 0035d48f has its CatchHandler @ 0035f504 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_ac8,local_568,&DAT_0016f309,0xd);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hba612b267e67056fE
            (&local_ac8,local_568,local_580);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f316,0x1a);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f330,0xc);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_ac8,&local_848,&DAT_0016f33c,0xc);
                    /* try { // try from 0035d4e3 to 0035d552 has its CatchHandler @ 0035f5a3 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E
            (&local_848,&local_ac8,&DAT_0016f348,0x11);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f359,0x18);
  _ZN12clap_builder7builder3arg3Arg10value_name17he42040b8555a7829E
            (&local_848,&local_ac8,&DAT_00168d84,4);
  _ZN12clap_builder7builder3arg3Arg13default_value17h490e19da68f376b3E
            (&local_ac8,&local_848,&DAT_0016f371,0x13);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_2a0,&local_ac8,0);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f384,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f38f,0xb)
  ;
                    /* try { // try from 0035d5b6 to 0035d625 has its CatchHandler @ 0035f591 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_001659f0,0x10)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016f39a,0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17he42040b8555a7829E
            (local_568,&local_ac8,&DAT_00168d84,4);
  _ZN12clap_builder7builder3arg3Arg13default_value17h490e19da68f376b3E
            (&local_ac8,local_568,"    ",4);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_2a0,&local_ac8,0);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f3bc,0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_ac8,&local_848,&DAT_0016f3cb,0xf);
                    /* try { // try from 0035d689 to 0035d6ef has its CatchHandler @ 0035f4ef */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E
            (&local_848,&local_ac8,&DAT_0016f3da,0x14);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f3ee,0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
  _ZN12clap_builder7builder3arg3Arg8requires17h5ae9e01375d4ebfbE
            (&local_ac8,&local_848,"LISTQuitbyten",4);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016eecc,10);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f408,10);
                    /* try { // try from 0035d73e to 0035d78d has its CatchHandler @ 0035f38a */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016f412,0xf);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f421,0x1a);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f43b,7);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016f442,7);
                    /* try { // try from 0035d7e1 to 0035d847 has its CatchHandler @ 0035f4da */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_848,&local_ac8,&DAT_0016f449,0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg5alias17h02979ebbaaedbb9aE
            (&local_ac8,&local_848,&DAT_0016f455,0xf);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f464,0x1d);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f481,9);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f48a,9);
                    /* try { // try from 0035d896 to 0035d8e5 has its CatchHandler @ 0035f375 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016f493,0xe);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f4a1,0x16);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f2fd,0xc);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_ac8,&local_848,&DAT_0016f4b7,0xc);
                    /* try { // try from 0035d939 to 0035d9a4 has its CatchHandler @ 0035f4c5 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E
            (&local_848,&local_ac8,&DAT_0016f4c3,0x11);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_848,&local_ac8,&DAT_0016f4d4,0x2b);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hd74deb0fcb1bd1ecE
            (&local_ac8,&local_848,&DAT_0016f2b8,9);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f4ff,3);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f502,3);
                    /* try { // try from 0035d9f3 to 0035da42 has its CatchHandler @ 0035f360 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_001694e0,8);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f505,0x3e);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f1fe,5);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,&local_848,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_848,&local_ac8,&DAT_0016f543,5);
                    /* try { // try from 0035daae to 0035db0f has its CatchHandler @ 0035f4b0 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_ac8,&local_848,&DAT_0016f548,10);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f552,0x13);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (&local_2a0,&local_ac8,&DAT_0016f1bb,7);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f565,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f572,0xd)
  ;
                    /* try { // try from 0035db63 to 0035dbb2 has its CatchHandler @ 0035f34b */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016f57f,0x12)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f591,0x27);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f5b8,3);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016f5bb,3);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,1);
                    /* try { // try from 0035dc1e to 0035dc98 has its CatchHandler @ 0035f49b */
  (*(code *)PTR__ZN12clap_builder7builder3arg3Arg16number_of_values17h0022716bec63d1ffE_00566ac0)
            (&local_ac8,&local_848,2);
  local_2a0 = &DAT_00169020;
  local_298 = 8;
  local_290 = &DAT_0016f5be;
  local_288 = 5;
  _ZN12clap_builder7builder3arg3Arg11value_names17hd246008edcbbc47aE
            (&local_848,&local_ac8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016ca40,0x20);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f5c3,5);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f5c8,5);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,0);
                    /* try { // try from 0035dcfc to 0035dd12 has its CatchHandler @ 0035f264 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016f5cd,0x1d);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f00c,9);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016f5ea,9);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,1);
  (*(code *)PTR_memcpy_00565e28)(&local_ac8,&local_848,0x278);
  local_850 = local_5d0 | 0x20;
  local_84c = local_5cc;
                    /* try { // try from 0035ddac to 0035dde3 has its CatchHandler @ 0035f336 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hd74deb0fcb1bd1ecE
            (&local_848,&local_ac8,&DAT_00165ad0,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f5f3,0x2c);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f61f,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f62c,0xd)
  ;
                    /* try { // try from 0035de32 to 0035de81 has its CatchHandler @ 0035f321 */
  _ZN12clap_builder7builder3arg3Arg8requires17h5ae9e01375d4ebfbE
            (local_568,&local_ac8,&DAT_0016f639,7);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f640,0x46);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f686,7);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,0);
                    /* try { // try from 0035decb to 0035df39 has its CatchHandler @ 0035f486 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_848,&local_ac8,&DAT_0016f68d,0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016f699,7);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hba612b267e67056fE
            (&local_848,&local_ac8,local_580);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f6a0,0x22);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f6c2,9);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(local_568,&local_ac8,&DAT_0016f6cb,9);
                    /* try { // try from 0035dfa0 to 0035dfd2 has its CatchHandler @ 0035f30c */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_ac8,local_568,&DAT_0016f6d4,0xe);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f6e2,0x1f);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E
            (&local_848,"TIMESTAMP-FORMATInvalid argumentInvalid exchange",0x10);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,0);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_848,&local_ac8,"timestamp-formatImperial_Aramaic",0x10);
                    /* try { // try from 0035e03b to 0035e089 has its CatchHandler @ 0035f471 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E
            (&local_ac8,&local_848,&DAT_0016f701,0x15);
  _ZN12clap_builder7builder3arg3Arg13default_value17h490e19da68f376b3E
            (&local_848,&local_ac8,"%H:%M:%SHEXLOWER",8);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f716,0x17);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_001691e8,8);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_00169558,8);
                    /* try { // try from 0035e0d8 to 0035e13a has its CatchHandler @ 0035f2f7 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,&DAT_0016f72d,0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,local_568,0x75);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016f73a,0x2f);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,"UNSTABLE",8);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_00169510,8);
                    /* try { // try from 0035e189 to 0035e1e8 has its CatchHandler @ 0035f45c */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_848,&local_ac8,&DAT_0016f769,0xd)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,2);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3840b73aed9f8277E(&local_848,&local_ac8);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f776,0x18);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f78e,7);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(local_568,&local_ac8,&DAT_0016f795,7);
                    /* try { // try from 0035e24f to 0035e294 has its CatchHandler @ 0035f2e2 */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(&local_ac8,local_568,&DAT_0016f79c,0xc);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,4);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016f7a8,0x12);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f294,0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,&local_848,100);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE
            (&local_848,&local_ac8,&DAT_0016f7ba,0x11);
                    /* try { // try from 0035e2fb to 0035e371 has its CatchHandler @ 0035f57f */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E
            (&local_ac8,&local_848,&DAT_0016f7cb,0x16);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hba612b267e67056fE
            (&local_ac8,&local_848,local_580);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_848,&local_ac8,&DAT_0016f7e1,0x49);
  _ZN12clap_builder7builder3arg3Arg8requires17h5ae9e01375d4ebfbE
            (&local_ac8,&local_848,&DAT_00169018,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f82a,3);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f82d,3);
                    /* try { // try from 0035e3c0 to 0035e40f has its CatchHandler @ 0035f2cd */
  _ZN12clap_builder7builder3arg3Arg3env17he1ad3c75d226c026E(local_568,&local_ac8,"JUST_YES",8);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_2a0,&local_ac8,&DAT_0016f830,0x22);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f852,9);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016f85b,9);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
                    /* try { // try from 0035e47b to 0035e491 has its CatchHandler @ 0035f24f */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f864,0xf);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f873,6);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f879,6);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,2);
                    /* try { // try from 0035e517 to 0035e52d has its CatchHandler @ 0035f23a */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016f87f,0xa0);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016f639,7);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016f91f,7);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_848,&local_ac8,99);
  _ZN12clap_builder7builder3arg3Arg8num_args17h88a6194ea7cdcbebE(&local_ac8,&local_848,1);
  (*(code *)PTR_memcpy_00565e28)(&local_848,&local_ac8,0x278);
  local_5d0 = local_850 | 0x20;
  local_5cc = local_84c;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,1);
  local_2a0 = (undefined *)0x2;
                    /* try { // try from 0035e61d to 0035e650 has its CatchHandler @ 0035f2b8 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hba612b267e67056fE
            (&local_848,&local_ac8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f926,0x57);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016f97d,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016f988,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,0);
                    /* try { // try from 0035e6d3 to 0035e6f9 has its CatchHandler @ 0035f447 */
  _ZN12clap_builder7builder3arg3Arg10value_name17he42040b8555a7829E
            (&local_ac8,local_568,&DAT_0016f5c3,5);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h8c7886baff0c67d8E(local_568,&local_ac8);
  (*(code *)PTR_memcpy_00565e28)(&local_ac8,local_568,0x278);
  local_850 = local_2f0 | 0x800;
  local_84c = local_2ec;
                    /* try { // try from 0035e734 to 0035e74f has its CatchHandler @ 0035f447 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (local_568,&local_ac8,&DAT_0016f993,0x29);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_ac8,local_568,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,"DUMP",4);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,"dump",4);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
                    /* try { // try from 0035e7d5 to 0035e7eb has its CatchHandler @ 0035f225 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016f9bc,0xe);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,"EDIT\':=\'\'=~\'",4);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,local_568,0x65);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(local_568,&local_ac8,"edit",4);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
                    /* try { // try from 0035e884 to 0035e89f has its CatchHandler @ 0035f210 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (local_568,&local_ac8,&DAT_0016f9ca,0x4c);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_ac8,local_568,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E
            (&local_848,"EVALUATEExtenderbopomofoUgaritic) ",8);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,"evaluate",8);
                    /* try { // try from 0035e90d to 0035e95c has its CatchHandler @ 0035f2a3 */
  _ZN12clap_builder7builder3arg3Arg5alias17h02979ebbaaedbb9aE(&local_848,&local_ac8,&DAT_00166608,4)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_848,&local_ac8,&DAT_0016fa16,0x6f);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_ac8,&local_848,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016ef40,6);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016fa85,3);
                    /* try { // try from 0035e9ca to 0035ea19 has its CatchHandler @ 0035f28e */
  _ZN12clap_builder7builder3arg3Arg5alias17h02979ebbaaedbb9aE(local_568,&local_ac8,&DAT_0016fa88,6);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (local_568,&local_ac8,&DAT_0016fa8e,0x1d);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_ac8,local_568,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016faab,6);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016fab1,6);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
                    /* try { // try from 0035ea9f to 0035eab5 has its CatchHandler @ 0035f1fb */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016fab7,0x12);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,"INIT || ",4);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_00167b5c,4);
                    /* try { // try from 0035eb23 to 0035eb72 has its CatchHandler @ 0035f279 */
  _ZN12clap_builder7builder3arg3Arg5alias17h02979ebbaaedbb9aE(local_568,&local_ac8,&DAT_0016fac9,10)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,local_568,2);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (local_568,&local_ac8,&DAT_0016fad3,0x27);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_ac8,local_568,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,"LISTQuitbyten",4);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,&local_848,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_848,&local_ac8,"list",4);
  _ZN12clap_builder7builder3arg3Arg8num_args17h88a6194ea7cdcbebE(&local_ac8,&local_848,0);
                    /* try { // try from 0035ec08 to 0035ec70 has its CatchHandler @ 0035f432 */
  _ZN12clap_builder7builder3arg3Arg10value_name17he42040b8555a7829E
            (&local_848,&local_ac8,&DAT_0016fafa,6);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_ac8,&local_848,0);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (&local_848,&local_ac8,&DAT_0016fb00,9);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016fb09,0x35);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016fb3e,3);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016fb41,3);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,2);
                    /* try { // try from 0035ecf6 to 0035ed0c has its CatchHandler @ 0035f1e6 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E(&local_ac8,local_568,&DAT_0016fb44,0xe)
  ;
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016fb52,7);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016fb59,7);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,0);
  (*(code *)PTR_memcpy_00565e28)(&local_ac8,&local_848,0x278);
  local_850 = local_5d0 | 4;
  local_84c = local_5cc;
                    /* try { // try from 0035edc2 to 0035eddd has its CatchHandler @ 0035f1d1 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_848,&local_ac8,&DAT_0016fb60,0x5d);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_ac8,&local_848,&DAT_0016fb52,7);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,"SHOW\'}}\'cyan",4);
  _ZN12clap_builder7builder3arg3Arg5short17h0067f5749df5645dE(&local_ac8,local_568,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(local_568,&local_ac8,&DAT_001675f8,4);
  _ZN12clap_builder7builder3arg3Arg8num_args17h88a6194ea7cdcbebE(&local_ac8,local_568,1);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,0);
                    /* try { // try from 0035ee8b to 0035eed9 has its CatchHandler @ 0035f41d */
  _ZN12clap_builder7builder3arg3Arg10value_name17he42040b8555a7829E
            (&local_ac8,local_568,"PATH ... => M",4);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6f13739170122608E
            (local_568,&local_ac8,&DAT_0016fb00,9);
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016fbbd,0x15);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(&local_848,&DAT_0016fbd2,7);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,&local_848,&DAT_0016fbd9,7);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(&local_848,&local_ac8,2);
                    /* try { // try from 0035ef5f to 0035ef75 has its CatchHandler @ 0035f1bc */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,&local_848,&DAT_0016fbe0,0x1f);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(&local_848,local_568,&local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016fbff,9);
  _ZN12clap_builder7builder3arg3Arg4long17h32aad1a85cbe4b9bE(&local_ac8,local_568,&DAT_0016fc08,9);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,2);
                    /* try { // try from 0035effb to 0035f011 has its CatchHandler @ 0035f1a7 */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016fc11,0x17);
  _ZN12clap_builder7builder3arg3Arg12help_heading17hd78dcbc9aec10ce6E
            (&local_2a0,&local_ac8,&DAT_001693c8,8);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(local_568,&local_848,&local_2a0)
  ;
  local_800 = 1;
  local_7f8 = 0;
  local_848 = 0;
  local_840 = 8;
  local_7f0 = 0;
  local_838 = 0;
  uStack_830 = 0;
  local_828 = 8;
  local_820 = 0;
  uStack_818 = 0;
  local_810 = 8;
  local_808 = 0;
  _ZN12clap_builder7builder9arg_group8ArgGroup2id17h60674fccd566ec19E(&local_ac8,&local_848);
                    /* try { // try from 0035f0cd to 0035f0dc has its CatchHandler @ 0035f192 */
  _ZN12clap_builder7builder9arg_group8ArgGroup4args17h157cacb295ca90d8E(&local_2a0,&local_ac8);
  _ZN12clap_builder7builder7command7Command5group17h261fc968afc76c3eE
            (&local_848,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hd16ab9c074c73c92E(local_568,&DAT_0016fb00,9);
  _ZN12clap_builder7builder3arg3Arg8num_args17h88a6194ea7cdcbebE(&local_ac8,local_568,1);
  _ZN12clap_builder7builder3arg3Arg6action17hcb13bbf8590ab861E(local_568,&local_ac8,1);
                    /* try { // try from 0035f141 to 0035f157 has its CatchHandler @ 0035f17d */
  _ZN12clap_builder7builder3arg3Arg4help17he8dc067d6f5e0de5E
            (&local_ac8,local_568,&DAT_0016fc28,0x4e);
  _ZN12clap_builder7builder7command7Command3arg17h0ec0a841f238e318E(param_1,&local_848,&local_ac8);
  return param_1;
}