undefined8 _ZN5uu_nl6uu_app17h74b291b671810a4fE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_2ac;
  undefined4 local_2a4;
  char *local_2a0;
  undefined8 local_298;
  char *local_290;
  undefined8 local_288;
  char *local_280;
  undefined8 local_278;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00368278)();
  _ZN12clap_builder7builder7command7Command3new17h4f4d52b8a826f509E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command5about17h2121ac2a316007e6E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command7version17hba080bf7a8c8ac1cE(local_830,local_568);
                    /* try { // try from 0021b5dd to 0021b5f3 has its CatchHandler @ 0021c040 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00368448)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hb046b40a6f3b0fd8E
            (local_568,local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command10after_help17h648fa8c408e7466bE(local_830,local_568);
  (*(code *)PTR_memcpy_00368170)(local_568,local_830,700);
  local_2ac = local_574 | 0x8008000080080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_830,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E(local_ab0,local_830,"helpt",4);
                    /* try { // try from 0021b699 to 0021b6b4 has its CatchHandler @ 0021c02b */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_830,local_ab0,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h48f4222ff07eb634E(local_ab0,local_830,5);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_568,"fileEDOMmode",4);
  (*(code *)PTR_memcpy_00368170)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 4;
  local_834 = local_2ec;
  _ZN12clap_builder7builder3arg3Arg6action17h48f4222ff07eb634E(local_568,local_ab0,1);
                    /* try { // try from 0021b750 to 0021b75c has its CatchHandler @ 0021c016 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h87b06a17a8ef9e45E(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_830,"body-numbering",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_830,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E
            (local_830,local_ab0,"body-numbering",0xe);
                    /* try { // try from 0021b7c6 to 0021b7fc has its CatchHandler @ 0021c0eb */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_830,"use STYLE for numbering body lines",0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(&local_2a0,local_ab0,"STYLE",5);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_568,"section-delimiter",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_568,100);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E
            (local_568,local_ab0,"section-delimiter",0x11);
                    /* try { // try from 0021b869 to 0021b89f has its CatchHandler @ 0021c0d9 */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_568,"use CC for separating logical pages",0x23);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(&local_2a0,local_ab0,"CC",2);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_830,&DAT_0014e410,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_830,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E(local_830,local_ab0,&DAT_0014e410,0x10)
  ;
                    /* try { // try from 0021b90c to 0021b942 has its CatchHandler @ 0021c0c7 */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_830,"use STYLE for numbering footer lines",0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(&local_2a0,local_ab0,"STYLE",5);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_568,&DAT_0014ec30,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_568,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E(local_568,local_ab0,&DAT_0014ec30,0x10)
  ;
                    /* try { // try from 0021b9af to 0021b9e5 has its CatchHandler @ 0021c0b5 */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_568,"use STYLE for numbering header lines",0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(&local_2a0,local_ab0,"STYLE",5);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_830,"line-increment",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_830,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E
            (local_830,local_ab0,"line-increment",0xe);
                    /* try { // try from 0021ba52 to 0021ba88 has its CatchHandler @ 0021c0a3 */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_830,"line number increment at each line",0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(local_830,local_ab0,"NUMBER",6);
                    /* try { // try from 0021ba89 to 0021ba96 has its CatchHandler @ 0021c001 */
  (*(code *)
    PTR__ZN79__LT_i64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17h99af702a0164d6f0E_00368450
  )(&local_2a0);
                    /* try { // try from 0021ba97 to 0021bab0 has its CatchHandler @ 0021bffc */
  _ZN12clap_builder7builder3arg3Arg12value_parser17ha98036d24364b612E
            (local_ab0,local_830,&local_2a0);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_568,"join-blank-lines",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_568,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E
            (local_568,local_ab0,"join-blank-lines",0x10);
                    /* try { // try from 0021bb1a to 0021bb50 has its CatchHandler @ 0021c091 */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_568,"group of NUMBER empty lines counted as one",0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(local_568,local_ab0,"NUMBER",6);
                    /* try { // try from 0021bb51 to 0021bb5e has its CatchHandler @ 0021bfe7 */
  (*(code *)
    PTR__ZN79__LT_u64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17hc43a5cf9c5a78de9E_00368458
  )(&local_2a0);
                    /* try { // try from 0021bb5f to 0021bb78 has its CatchHandler @ 0021bfe2 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h6e31409384f544c4E
            (local_ab0,local_568,&local_2a0);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_830,"number-format",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_830,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E
            (local_830,local_ab0,"number-format",0xd);
                    /* try { // try from 0021bbe2 to 0021bc83 has its CatchHandler @ 0021c0fd */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_830,"insert line numbers according to FORMAT",0x27);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(local_830,local_ab0,"FORMAT",6);
  local_2a0 = "ln";
  local_298 = 2;
  local_290 = "rn";
  local_288 = 2;
  local_280 = "rzinternal error: entered unreachable code: Should have been caught by clap";
  local_278 = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb7354ee9b7b275a0E
            (local_ab0,local_830,&local_2a0);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_568,"no-renumber",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_568,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E(local_568,local_ab0,"no-renumber",0xb);
                    /* try { // try from 0021bced to 0021bd05 has its CatchHandler @ 0021bfcd */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_568,"do not reset line numbers at logical pages",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h48f4222ff07eb634E(&local_2a0,local_ab0,3);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_830,&DAT_0014ecf0,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E(local_830,local_ab0,&DAT_0014ecf0,0x10)
  ;
                    /* try { // try from 0021bd87 to 0021bdbd has its CatchHandler @ 0021c07f */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_830,"add STRING after (possible) line number",0x27);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(&local_2a0,local_ab0,"STRING",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_568,"starting-line-number",0x14);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E
            (local_568,local_ab0,"starting-line-number",0x14);
                    /* try { // try from 0021be2a to 0021be60 has its CatchHandler @ 0021c06a */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_568,"first line number on each logical page",0x26);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(local_568,local_ab0,"NUMBER",6);
                    /* try { // try from 0021be61 to 0021be6e has its CatchHandler @ 0021bfb8 */
  (*(code *)
    PTR__ZN79__LT_i64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17h99af702a0164d6f0E_00368450
  )(&local_2a0);
                    /* try { // try from 0021be6f to 0021be88 has its CatchHandler @ 0021bfb3 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17ha98036d24364b612E
            (local_ab0,local_568,&local_2a0);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h39cbb397b1a2566aE(local_830,"number-width",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17he9b03de2d75e8b25E(local_ab0,local_830,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h5bddb8e4a8cb4a01E(local_830,local_ab0,"number-width",0xc)
  ;
                    /* try { // try from 0021bef2 to 0021bf28 has its CatchHandler @ 0021c055 */
  _ZN12clap_builder7builder3arg3Arg4help17hc2a9dd8ae6533a8bE
            (local_ab0,local_830,"use NUMBER columns for line numbers",0x23);
  _ZN12clap_builder7builder3arg3Arg10value_name17h95f67a6951ff81afE(local_830,local_ab0,"NUMBER",6);
                    /* try { // try from 0021bf29 to 0021bf34 has its CatchHandler @ 0021bf9e */
  local_298 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h756ec9a5e05147bcE
                        (
                        _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17he7963e1397bf94dbE
                        );
  local_2a0 = (char *)0x4;
  local_290 = "";
                    /* try { // try from 0021bf58 to 0021bf71 has its CatchHandler @ 0021bf99 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hbac70b8e505e6cb7E
            (local_ab0,local_830,&local_2a0);
  _ZN12clap_builder7builder7command7Command3arg17h98dac3f16f43bcbcE(param_1,local_568,local_ab0);
  return param_1;
}