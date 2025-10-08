undefined8 _ZN6uu_cat6uu_app17he6c315476365ffbfE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f22d0)();
  _ZN12clap_builder7builder7command7Command3new17h01e07be562f29f1cE(local_568,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h0d0c00a8c1ced462E(local_830,local_568);
                    /* try { // try from 0015d87a to 0015d890 has its CatchHandler @ 0015e022 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f2528)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h4108e64acd43104aE
            (local_568,local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hd1bcd9eb03e221a7E(local_830,local_568);
  puVar1 = PTR_memcpy_001f22b0;
  (*(code *)PTR_memcpy_001f22b0)(local_568,local_830,700);
  local_2ac = local_574 | 0x8800000088;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_830,"file",4);
  (*(code *)puVar1)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 4;
  local_834 = local_5b4;
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_830,local_ab0,1);
                    /* try { // try from 0015d969 to 0015d975 has its CatchHandler @ 0015e010 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h053e94f0fa77bdeeE(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_568,"show-all",8);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_568,0x41);
  _ZN12clap_builder7builder3arg3Arg4long17h78dc98ba918450b7E(local_568,local_ab0,"show-all",8);
                    /* try { // try from 0015d9df to 0015d9f7 has its CatchHandler @ 0015dffe */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_ab0,local_568,"equivalent to -vET",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_830,"number-nonblank",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_830,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h78dc98ba918450b7E
            (local_830,local_ab0,"number-nonblank",0xf);
                    /* try { // try from 0015da79 to 0015da91 has its CatchHandler @ 0015dfec */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_ab0,local_830,"number nonempty output lines, overrides -n",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_568,"e",1);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_568,0x65);
                    /* try { // try from 0015daf5 to 0015db10 has its CatchHandler @ 0015dfda */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_568,local_ab0,"equivalent to -vE",0x11);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_830,"show-ends",9);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_830,0x45);
  _ZN12clap_builder7builder3arg3Arg4long17h78dc98ba918450b7E(local_830,local_ab0,"show-ends",9);
                    /* try { // try from 0015db92 to 0015dbaa has its CatchHandler @ 0015dfc8 */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_ab0,local_830,"display $ at end of each line",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_568,"number",6);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_568,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h78dc98ba918450b7E(local_568,local_ab0,"number",6);
                    /* try { // try from 0015dc2c to 0015dc44 has its CatchHandler @ 0015dfb6 */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_ab0,local_568,"number all output lines",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_830,"squeeze-blank",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h78dc98ba918450b7E
            (local_830,local_ab0,"squeeze-blank",0xd);
                    /* try { // try from 0015dcc6 to 0015dcde has its CatchHandler @ 0015dfa4 */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_ab0,local_830,"suppress repeated empty output lines",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_568,"t",1);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_568,0x74);
                    /* try { // try from 0015dd42 to 0015dd5d has its CatchHandler @ 0015df8f */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_568,local_ab0,"equivalent to -vT",0x11);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_830,"show-tabs",9);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_830,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17h78dc98ba918450b7E(local_830,local_ab0,"show-tabs",9);
                    /* try { // try from 0015dddf to 0015ddf7 has its CatchHandler @ 0015df7a */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_ab0,local_830,"display TAB characters at ^I",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_568,"show-nonprinting",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h78dc98ba918450b7E
            (local_568,local_ab0,"show-nonprinting",0x10);
                    /* try { // try from 0015de79 to 0015de91 has its CatchHandler @ 0015df65 */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE
            (local_ab0,local_568,"use ^ and M- notation, except for LF (\\n) and TAB (\\t)",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h91463a6fc3f62860E(local_830,"ignored-u",9);
  _ZN12clap_builder7builder3arg3Arg5short17hdcafac8d0cea540dE(local_ab0,local_830,0x75);
                    /* try { // try from 0015def5 to 0015df10 has its CatchHandler @ 0015df50 */
  _ZN12clap_builder7builder3arg3Arg4help17h9ac7e7fe3dd3ef8cE(local_830,local_ab0,"(ignored): ",9);
  _ZN12clap_builder7builder3arg3Arg6action17hbb9a0bf20dd31313E(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17h72a90c0b70812c56E(param_1,local_568,local_ab0);
  return param_1;
}