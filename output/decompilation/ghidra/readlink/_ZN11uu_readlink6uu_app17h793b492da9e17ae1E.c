undefined8 _ZN11uu_readlink6uu_app17h793b492da9e17ae1E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [640];
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee778)();
  _ZN12clap_builder7builder7command7Command3new17hae6dd8ccca32a048E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hc553a92d57d6ad9cE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h287279ac963e7bb7E(local_830,local_568);
                    /* try { // try from 0015cc3d to 0015cc53 has its CatchHandler @ 0015d292 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001eea30)(local_ab0,&DAT_001194b3,0x18)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h52fcd66da236ed94E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001ee828)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_568,&DAT_001194cb,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_568,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_568,local_ab0,&DAT_001194cb,0xc);
                    /* try { // try from 0015ccfe to 0015cd16 has its CatchHandler @ 0015d280 */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_568,&DAT_001194d7,0x7f)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_830,&DAT_00119556,0x15);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_830,0x65);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_830,local_ab0,&DAT_00119556,0x15)
  ;
                    /* try { // try from 0015cd98 to 0015cdb0 has its CatchHandler @ 0015d26e */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_830,&DAT_0011956b,0x73)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_568,&DAT_001195de,0x14);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_568,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_568,local_ab0,&DAT_001195de,0x14)
  ;
                    /* try { // try from 0015ce32 to 0015ce4a has its CatchHandler @ 0015d25c */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_568,&DAT_001195f2,0x86)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_830,&DAT_00119678,10);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_830,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_830,local_ab0,&DAT_00119678,10);
                    /* try { // try from 0015cecc to 0015cee4 has its CatchHandler @ 0015d24a */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_830,&DAT_00119682,0x24)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_568,&DAT_001196a6,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_568,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_568,local_ab0,&DAT_001196a6,5);
                    /* try { // try from 0015cf66 to 0015cf7e has its CatchHandler @ 0015d238 */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_568,&DAT_001196ab,0x1c)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_830,&DAT_001196c7,6);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_830,local_ab0,&DAT_001196c7,6);
                    /* try { // try from 0015d000 to 0015d018 has its CatchHandler @ 0015d226 */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_830,&DAT_001196ab,0x1c)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_568,&DAT_001196cd,7);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_568,local_ab0,&DAT_001196cd,7);
                    /* try { // try from 0015d09a to 0015d0b2 has its CatchHandler @ 0015d214 */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_568,&DAT_001196d4,0x14)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_830,&DAT_00117e80,4);
  _ZN12clap_builder7builder3arg3Arg5short17h2c8669c1941c8f96E(local_ab0,local_830,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h3808bd5444b13d75E(local_830,local_ab0,&DAT_00117e80,4);
                    /* try { // try from 0015d134 to 0015d14c has its CatchHandler @ 0015d1ff */
  _ZN12clap_builder7builder3arg3Arg4help17h3ee0273fd1f3e9eeE(local_ab0,local_830,&DAT_001196e8,0x2c)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5fa8c3f7ea4b1f5bE(local_568,&DAT_00119714,5);
  _ZN12clap_builder7builder3arg3Arg6action17hd8bf0daca569f8f5E(local_ab0,local_568,1);
                    /* try { // try from 0015d1b0 to 0015d1bf has its CatchHandler @ 0015d1ea */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h383c9e9082bb8622E(local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h5525f61acc7eea36E(param_1,local_830,local_568);
  return param_1;
}