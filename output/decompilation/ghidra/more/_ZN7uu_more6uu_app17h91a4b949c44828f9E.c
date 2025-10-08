undefined8 _ZN7uu_more6uu_app17h91a4b949c44828f9E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined auStack_ab8 [632];
  uint local_840;
  undefined4 local_83c;
  undefined local_838 [632];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_57c;
  undefined4 local_574;
  undefined local_570 [700];
  ulong local_2b4;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  uint local_30;
  undefined4 local_2c;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0022d360)();
  _ZN12clap_builder7builder7command7Command3new17h30f6ba13e97ee7b8E(local_838,uVar2);
  _ZN12clap_builder7builder7command7Command5about17h69937b26e7a4dc33E(local_570,local_838);
                    /* try { // try from 0017a67c to 0017a690 has its CatchHandler @ 0017aeb0 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0022d510)
            (auStack_ab8,"{} [OPTIONS] FILE...",0x14);
  _ZN12clap_builder7builder7command7Command14override_usage17hf67b24ac5419c372E
            (local_838,local_570,auStack_ab8);
  _ZN12clap_builder7builder7command7Command7version17h5c3b9e434c95db22E(local_570,local_838);
  (*(code *)PTR_memcpy_0022d208)(local_838,local_570,700);
  local_57c = local_2b4 | 0x8000000080;
  local_574 = local_2ac;
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_570,"print-over",10);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_570,99);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(local_570,auStack_ab8,"print-over",10);
                    /* try { // try from 0017a74a to 0017a760 has its CatchHandler @ 0017ae9e */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (auStack_ab8,local_570,"Do not scroll, display text and clean line ends",0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17h491360c059fb3385E(&local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_838,"silent",6);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_838,100);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(local_838,auStack_ab8,"silent",6);
                    /* try { // try from 0017a7de to 0017a7f4 has its CatchHandler @ 0017ae8c */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (auStack_ab8,local_838,"Display help instead of ringing bell",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17h491360c059fb3385E(&local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_838,local_570,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_570,"clean-print",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_570,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E
            (local_570,auStack_ab8,"clean-print",0xb);
                    /* try { // try from 0017a872 to 0017a888 has its CatchHandler @ 0017ae7a */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (auStack_ab8,local_570,"Do not scroll, clean screen and display text",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h491360c059fb3385E(&local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_838,"squeeze",7);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_838,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(local_838,auStack_ab8,"squeeze",7);
                    /* try { // try from 0017a906 to 0017a91c has its CatchHandler @ 0017ae65 */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (auStack_ab8,local_838,"Squeeze multiple blank lines into one",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h491360c059fb3385E(&local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_838,local_570,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_570,"plain",5);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_570,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(local_570,auStack_ab8,"plain",5);
  _ZN12clap_builder7builder3arg3Arg6action17h491360c059fb3385E(auStack_ab8,local_570,2);
  puVar1 = PTR_memcpy_0022d208;
  (*(code *)PTR_memcpy_0022d208)(&local_2a8,auStack_ab8,0x278);
  local_30 = local_840 | 4;
  local_2c = local_83c;
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_838,"pattern",7);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_838,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(local_838,auStack_ab8,"pattern",7);
  (*(code *)puVar1)(auStack_ab8,local_838,0x278);
  local_840 = local_5c0 & 0xffffffde | 0x20;
  local_83c = local_5bc;
                    /* try { // try from 0017aa7f to 0017aab2 has its CatchHandler @ 0017aef8 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h3e4c8569e32d7d7aE
            (local_838,auStack_ab8,"pattern",7);
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (auStack_ab8,local_838,"Display file beginning from pattern match",0x29);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_838,local_570,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_570,"from-line",9);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_570,0x46);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(local_570,auStack_ab8,"from-line",9);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4f759de10311f98cE(auStack_ab8,local_570);
                    /* try { // try from 0017ab26 to 0017ab41 has its CatchHandler @ 0017aee6 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h3e4c8569e32d7d7aE
            (local_570,auStack_ab8,"number",6);
                    /* try { // try from 0017ab42 to 0017ab4d has its CatchHandler @ 0017ae50 */
  local_2a0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h21f2183ad1d56373E
                        (
                        _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17he7963e1397bf94dbE
                        );
  local_2a8 = 4;
  local_298 = &DAT_00225228;
                    /* try { // try from 0017ab71 to 0017ab88 has its CatchHandler @ 0017ae4b */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb2f24d6413984688E
            (auStack_ab8,local_570,&local_2a8);
                    /* try { // try from 0017ab89 to 0017aba4 has its CatchHandler @ 0017aee6 */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (&local_2a8,auStack_ab8,"Display file beginning from line number",0x27);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_838,"lines",5);
  _ZN12clap_builder7builder3arg3Arg5short17h907209d848174291E(auStack_ab8,local_838,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(local_838,auStack_ab8,"lines",5);
                    /* try { // try from 0017ac0f to 0017ac25 has its CatchHandler @ 0017aed4 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h3e4c8569e32d7d7aE
            (auStack_ab8,local_838,"number",6);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4f759de10311f98cE(local_838,auStack_ab8);
                    /* try { // try from 0017ac36 to 0017ac3e has its CatchHandler @ 0017ae36 */
  (*(code *)
    PTR__ZN79__LT_u16_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17hf6bd37019978ff12E_0022d518
  )(auStack_ab8);
  _ZN12clap_builder7builder12value_parser29RangedI64ValueParser_LT_T_GT_5range17hc2282f1ad623b328E
            (&local_2a8,auStack_ab8);
                    /* try { // try from 0017ac52 to 0017ac64 has its CatchHandler @ 0017ae31 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h9ba99eb30652d3bbE
            (auStack_ab8,local_838,&local_2a8);
                    /* try { // try from 0017ac65 to 0017ac80 has its CatchHandler @ 0017aed4 */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (&local_2a8,auStack_ab8,"The number of lines per screen full",0x23);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_838,local_570,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_570,"number",6);
  _ZN12clap_builder7builder3arg3Arg4long17hd968281fcccab1b6E(auStack_ab8,local_570,"number",6);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4f759de10311f98cE(local_570,auStack_ab8);
                    /* try { // try from 0017ace3 to 0017aceb has its CatchHandler @ 0017ae0f */
  (*(code *)
    PTR__ZN79__LT_u16_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17hf6bd37019978ff12E_0022d518
  )(auStack_ab8);
  _ZN12clap_builder7builder12value_parser29RangedI64ValueParser_LT_T_GT_5range17hc2282f1ad623b328E
            (&local_2a8,auStack_ab8);
                    /* try { // try from 0017acff to 0017ad11 has its CatchHandler @ 0017ae0a */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h9ba99eb30652d3bbE
            (auStack_ab8,local_570,&local_2a8);
                    /* try { // try from 0017ad12 to 0017ad2d has its CatchHandler @ 0017ae05 */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (&local_2a8,auStack_ab8,"Same as --lines",0xf);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h35c2f329dc6a9a7bE(local_838,"files",5);
  (*(code *)PTR_memcpy_0022d208)(auStack_ab8,local_838,0x278);
  local_840 = local_5c0 & 0xfffffffe;
  local_83c = local_5bc;
  _ZN12clap_builder7builder3arg3Arg6action17h491360c059fb3385E(local_838,auStack_ab8,1);
                    /* try { // try from 0017adb2 to 0017add8 has its CatchHandler @ 0017aec2 */
  _ZN12clap_builder7builder3arg3Arg4help17h15d351abe03d51b6E
            (auStack_ab8,local_838,"Path to the files to be read",0x1c);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h6e3af0887a8b9f0eE(local_838,auStack_ab8);
  _ZN12clap_builder7builder7command7Command3arg17h9aa5a89359e32a76E(param_1,local_570,local_838);
  return param_1;
}