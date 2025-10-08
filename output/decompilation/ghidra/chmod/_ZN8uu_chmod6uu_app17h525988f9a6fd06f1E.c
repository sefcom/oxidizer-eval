undefined8 _ZN8uu_chmod6uu_app17h525988f9a6fd06f1E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [700];
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [700];
  ulong local_52c;
  undefined4 local_524;
  undefined local_520 [640];
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f2588)();
  _ZN12clap_builder7builder7command7Command3new17h40f6847594470505E(local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd6e16cc63664f77aE(local_7e8,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hd97b4a9162a6e358E(local_ab0,local_7e8);
                    /* try { // try from 0015d897 to 0015d8b0 has its CatchHandler @ 0015df35 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f2680)
            (local_520,
             "{} [OPTION]... MODE[,MODE]... FILE...\n{} [OPTION]... OCTAL-MODE FILE...\n{} [OPTION]... --reference=RFILE FILE..."
             ,0x70);
  _ZN12clap_builder7builder7command7Command14override_usage17h66844063a605b8a4E
            (local_7e8,local_ab0,local_520);
  (*(code *)PTR_memcpy_001f2480)(local_ab0,local_7e8,700);
  local_7f4 = local_52c | 0x408008804080088;
  local_7ec = local_524;
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_7e8,&DAT_001186d0,4);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE(local_520,local_7e8,&DAT_001186d0,4);
                    /* try { // try from 0015d943 to 0015d95e has its CatchHandler @ 0015df26 */
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_7e8,local_520,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_520,local_7e8,5);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_7e8,local_ab0,local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_ab0,"changes",7);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE(local_520,local_ab0,"changes",7);
  _ZN12clap_builder7builder3arg3Arg5short17ha157f5519922c33aE(local_ab0,local_520,99);
                    /* try { // try from 0015d9dd to 0015d9f8 has its CatchHandler @ 0015df14 */
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_520,local_ab0,"like verbose but report only when a change is made",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_2a0,local_520,2);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_ab0,local_7e8,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_7e8,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE(local_520,local_7e8,"quiet",5);
                    /* try { // try from 0015da65 to 0015daad has its CatchHandler @ 0015df68 */
  _ZN12clap_builder7builder3arg3Arg13visible_alias17hc999d6545e1faaf6E(local_7e8,local_520);
  _ZN12clap_builder7builder3arg3Arg5short17ha157f5519922c33aE(local_520,local_7e8,0x66);
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_7e8,local_520,"suppress most error messages",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_7e8,local_ab0,local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_ab0,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE(local_520,local_ab0,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17ha157f5519922c33aE(local_ab0,local_520,0x76);
                    /* try { // try from 0015db2c to 0015db47 has its CatchHandler @ 0015df02 */
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_520,local_ab0,"output a diagnostic for every file processed",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_2a0,local_520,2);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_ab0,local_7e8,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_7e8,"no-preserve-root",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE
            (local_520,local_7e8,"no-preserve-root",0x10);
                    /* try { // try from 0015dbb4 to 0015dbcf has its CatchHandler @ 0015def3 */
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_7e8,local_520,"do not treat \'/\' specially (the default)",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_520,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_7e8,local_ab0,local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_ab0,"preserve-root",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE
            (local_520,local_ab0,"preserve-root",0xd);
                    /* try { // try from 0015dc39 to 0015dc51 has its CatchHandler @ 0015dede */
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_ab0,local_520,"fail to operate recursively on \'/\'",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_ab0,local_7e8,local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_7e8,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE(local_520,local_7e8,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg5short17ha157f5519922c33aE(local_7e8,local_520,0x52);
                    /* try { // try from 0015dcd3 to 0015dcee has its CatchHandler @ 0015decc */
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_520,local_7e8,"change files and directories recursively",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_2a0,local_520,2);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_7e8,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_ab0,"RFILE",5);
  _ZN12clap_builder7builder3arg3Arg4long17h47a3124f19131cffE(local_520,local_ab0,"reference",9);
                    /* try { // try from 0015dd59 to 0015dd88 has its CatchHandler @ 0015df56 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17he090b2a29b4cc6b5E(local_ab0,local_520,3);
  _ZN12clap_builder7builder3arg3Arg4help17h9d919827356d600dE
            (local_520,local_ab0,"use RFILE\'s mode instead of MODE values",0x27);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_ab0,local_7e8,local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_7e8,&DAT_001186f0,4);
                    /* try { // try from 0015ddbf to 0015ddda has its CatchHandler @ 0015deba */
  _ZN12clap_builder7builder3arg3Arg23required_unless_present17h43b0d2c529daa729E
            (local_520,local_7e8,"RFILE",5);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_7e8,local_ab0,local_520);
  _ZN12clap_builder7builder3arg3Arg3new17h9f9bc2a7380a2594E(local_ab0,&DAT_001186b4,4);
                    /* try { // try from 0015de0e to 0015de58 has its CatchHandler @ 0015df44 */
  _ZN12clap_builder7builder3arg3Arg23required_unless_present17h43b0d2c529daa729E
            (local_520,local_ab0,&DAT_001186f0,4);
  _ZN12clap_builder7builder3arg3Arg6action17hf7b23a295ed8d235E(local_ab0,local_520,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17he090b2a29b4cc6b5E(local_520,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf65503a78355b4c7E(local_ab0,local_7e8,local_520);
                    /* try { // try from 0015de73 to 0015de80 has its CatchHandler @ 0015dea8 */
  (*(code *)PTR__ZN6uucore8features5perms11common_args17h624fd87efa47755fE_001f2688)(local_7e8);
  _ZN12clap_builder7builder7command7Command4args17h1ddb64b5a313f38fE(param_1,local_ab0,local_7e8);
  return param_1;
}