undefined8 _ZN6uu_ptx6uu_app17h1c00958dd96a6a6bE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_ac0 [632];
  uint local_848;
  undefined4 local_844;
  char *local_840;
  undefined8 local_838;
  char *local_830;
  undefined8 local_828;
  char *local_820;
  undefined8 local_818;
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [632];
  uint local_300;
  undefined4 local_2fc;
  ulong local_2bc;
  undefined4 local_2b4;
  char *local_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  undefined8 local_298;
  char *local_290;
  undefined8 local_288;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00380000)();
  _ZN12clap_builder7builder7command7Command3new17h0b0ca41b37566755E(&local_840,uVar2);
  _ZN12clap_builder7builder7command7Command5about17h992feb62b52d14dcE(local_578,&local_840);
  _ZN12clap_builder7builder7command7Command7version17hd8103f1ab6a16971E(&local_840,local_578);
                    /* try { // try from 0022dfd0 to 0022dfe6 has its CatchHandler @ 0022ed31 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_003802c8)
            (local_ac0,"{} [OPTION]... [INPUT]...\n{} -G [OPTION]... [INPUT [OUTPUT]]",0x3c);
  _ZN12clap_builder7builder7command7Command14override_usage17h90d6116fa033c2daE
            (local_578,&local_840,local_ac0);
  puVar1 = PTR_memcpy_0037fee0;
  (*(code *)PTR_memcpy_0037fee0)(&local_840,local_578,700);
  local_584 = local_2bc | 0x8000000080;
  local_57c = local_2b4;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"filemode",4);
  (*(code *)puVar1)(local_ac0,local_578,0x278);
  local_848 = local_300 | 4;
  local_844 = local_2fc;
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(local_578,local_ac0,1);
                    /* try { // try from 0022e0ac to 0022e0b8 has its CatchHandler @ 0022ed1c */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4857b537972d8a9dE(local_ac0,local_578);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"auto-reference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x41);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E
            (&local_840,local_ac0,"auto-reference",0xe);
                    /* try { // try from 0022e122 to 0022e13a has its CatchHandler @ 0022ed07 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,&local_840,"output automatically generated references",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"traditional",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x47);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(local_578,local_ac0,"traditional",0xb);
                    /* try { // try from 0022e1bc to 0022e1d4 has its CatchHandler @ 0022ecf2 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,local_578,"behave more like System V \'ptx\'",0x1f);
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"flag-truncation",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x46);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E
            (&local_840,local_ac0,"flag-truncation",0xf);
                    /* try { // try from 0022e256 to 0022e28c has its CatchHandler @ 0022edf7 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,&local_840,"use STRING for flagging line truncations",0x28);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE(&local_2b0,local_ac0,"STRING",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"macro-name",10);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x4d);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(local_578,local_ac0,"macro-name",10);
                    /* try { // try from 0022e2f9 to 0022e32f has its CatchHandler @ 0022ede5 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,local_578,"macro name to use instead of \'xx\'",0x21);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE(&local_2b0,local_ac0,"STRING",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"format",6);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(local_ac0,&local_840,"format",6);
  (*(code *)PTR_memcpy_0037fee0)(&local_840,local_ac0,0x278);
  local_5c8 = local_848 | 4;
  local_5c4 = local_844;
  local_2b0 = "roff";
  local_2a8 = 4;
  local_2a0 = "tex";
  local_298 = 3;
                    /* try { // try from 0022e3f2 to 0022e45c has its CatchHandler @ 0022edd3 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb60218a23cee4bc2E
            (local_ac0,&local_840,&local_2b0);
  local_840 = "format";
  local_838 = 6;
  local_830 = "roff";
  local_828 = 4;
  local_820 = "tex";
  local_818 = 3;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h81fc6be3388c4155E
            (&local_2b0,local_ac0,&local_840);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"roff",4);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x4f);
                    /* try { // try from 0022e4ae to 0022e51f has its CatchHandler @ 0022edc1 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_578,local_ac0,"generate output as roff directives",0x22);
  local_2b0 = "format";
  local_2a8 = 6;
  local_2a0 = "roff";
  local_298 = 4;
  local_290 = "tex";
  local_288 = 3;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h81fc6be3388c4155E
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"tex",3);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x54);
                    /* try { // try from 0022e586 to 0022e5f7 has its CatchHandler @ 0022edaf */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (&local_840,local_ac0,"generate output as TeX directives",0x21);
  local_2b0 = "format";
  local_2a8 = 6;
  local_2a0 = "roff";
  local_298 = 4;
  local_290 = "tex";
  local_288 = 3;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h81fc6be3388c4155E
            (local_ac0,&local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"right-side-refs",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E
            (local_578,local_ac0,"right-side-refs",0xf);
                    /* try { // try from 0022e679 to 0022e691 has its CatchHandler @ 0022ecdd */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,local_578,"put references at right, not counted in -w",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"sentence-regexp",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E
            (&local_840,local_ac0,"sentence-regexp",0xf);
                    /* try { // try from 0022e713 to 0022e749 has its CatchHandler @ 0022ed9a */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,&local_840,"for end of lines or end of sentences",0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE(&local_2b0,local_ac0,"REGEXP",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"word-regexp",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x57);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(local_578,local_ac0,"word-regexp",0xb);
                    /* try { // try from 0022e7b6 to 0022e7ec has its CatchHandler @ 0022ed85 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,local_578,"use REGEXP to match each keyword",0x20);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE(&local_2b0,local_ac0,"REGEXP",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"break-file",10);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(&local_840,local_ac0,"break-file",10);
                    /* try { // try from 0022e859 to 0022e8a1 has its CatchHandler @ 0022ee2d */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,&local_840,"word break characters in this FILE",0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE
            (&local_840,local_ac0,&DAT_0015119c,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4857b537972d8a9dE(local_ac0,&local_840);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"ignore-case",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(local_578,local_ac0,"ignore-case",0xb);
                    /* try { // try from 0022e90b to 0022e923 has its CatchHandler @ 0022ecc8 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,local_578,"fold lower case to upper case for sorting",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,&DAT_001525d8,8);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(&local_840,local_ac0,&DAT_001525d8,8);
                    /* try { // try from 0022e9a5 to 0022e9db has its CatchHandler @ 0022ed70 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,&local_840,"gap size in columns between output fields",0x29);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE(&local_2b0,local_ac0,"NUMBER",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"ignore-file",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(local_578,local_ac0,"ignore-file",0xb);
                    /* try { // try from 0022ea48 to 0022ea90 has its CatchHandler @ 0022ee1b */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,local_578,"read ignore word list from FILE",0x1f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE
            (local_578,local_ac0,&DAT_0015119c,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4857b537972d8a9dE(local_ac0,local_578);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"only-file",9);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(&local_840,local_ac0,"only-file",9);
                    /* try { // try from 0022eafa to 0022eb42 has its CatchHandler @ 0022ee09 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,&local_840,"read only word list from this FILE",0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE
            (&local_840,local_ac0,&DAT_0015119c,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4857b537972d8a9dE(local_ac0,&local_840);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(&local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(local_578,"references",10);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,local_578,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(local_578,local_ac0,"references",10);
                    /* try { // try from 0022ebac to 0022ebe2 has its CatchHandler @ 0022ed5b */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,local_578,"first field of each line is a reference",0x27);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE
            (local_578,local_ac0,&DAT_0015119c,4);
  _ZN12clap_builder7builder3arg3Arg6action17ha7a1f2fba74b0519E(local_ac0,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(local_578,&local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h631b298e702b52bcE(&local_840,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17h6a4ee9ce5f0b5f0cE(local_ac0,&local_840,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17hda8111f7dae90d37E(&local_840,local_ac0,"width",5);
                    /* try { // try from 0022ec64 to 0022ec9a has its CatchHandler @ 0022ed46 */
  _ZN12clap_builder7builder3arg3Arg4help17h4da5c5f29ad265e1E
            (local_ac0,&local_840,"output width in columns, reference excluded",0x2b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h9190502240af5d2aE(&local_840,local_ac0,"NUMBER",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf94cdbd5ea9194a4E(param_1,local_578,&local_840);
  return param_1;
}