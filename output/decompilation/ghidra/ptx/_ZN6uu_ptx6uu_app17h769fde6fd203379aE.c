undefined8 _ZN6uu_ptx6uu_app17h769fde6fd203379aE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h10fabb2b1144ad1cE(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command5about17h9a931ab9e78fbfe3E
            (local_7f8,local_530,&DAT_0015ed0f,0x108);
  _ZN12clap_builder7builder7command7Command7version17h285dda135f18ba90E
            (local_530,local_7f8,&DAT_0015ee17,6);
                    /* try { // try from 002b8f33 to 002b8f47 has its CatchHandler @ 002b9a6a */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,&DAT_0015ee1d,0x3c);
  _ZN12clap_builder7builder7command7Command14override_usage17hc7af5b0854f2f0a9E
            (local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_0042c340)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 002b8fa1 to 002b8fb9 has its CatchHandler @ 002b9a7f */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"filemode",4);
  (*(code *)PTR_memcpy_0042c340)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(local_7f8,auStack_a48,1);
                    /* try { // try from 002b900a to 002b9019 has its CatchHandler @ 002b9a7f */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h9de4deb4bac13114E(auStack_a48,local_7f8,3);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002b9032 to 002b909a has its CatchHandler @ 002b9afd */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"auto-reference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x41);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_530,auStack_a48,"auto-reference",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,&DAT_0015ee59,0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,local_268);
                    /* try { // try from 002b90cb to 002b9133 has its CatchHandler @ 002b9ae8 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"traditional",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x47);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_7f8,auStack_a48,"traditional",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015ee82,0x1f);
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,local_268);
                    /* try { // try from 002b9164 to 002b91e8 has its CatchHandler @ 002b9b84 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"flag-truncation",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x46);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_530,auStack_a48,"flag-truncation",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,&DAT_0015eea1,0x28);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_268,auStack_a48,&DAT_0015eec9,6);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,local_268);
                    /* try { // try from 002b9206 to 002b928a has its CatchHandler @ 002b9b72 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"macro-name",10);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x4d);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E(local_7f8,auStack_a48,"macro-name",10);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015eecf,0x21);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_268,auStack_a48,&DAT_0015eec9,6);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,local_268);
                    /* try { // try from 002b92a8 to 002b9310 has its CatchHandler @ 002b9ad3 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"format=roff",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x4f);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_530,auStack_a48,"format=roff",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,&DAT_0015eef0,0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,local_268);
                    /* try { // try from 002b9341 to 002b93a9 has its CatchHandler @ 002b9abe */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"right-side-refs",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_7f8,auStack_a48,"right-side-refs",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015ef12,0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,local_268);
                    /* try { // try from 002b93da to 002b945e has its CatchHandler @ 002b9b60 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"sentence-regexp",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_530,auStack_a48,"sentence-regexp",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,&DAT_0015ef3c,0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_268,auStack_a48,&DAT_0015ef60,6);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,local_268);
                    /* try { // try from 002b947c to 002b94e4 has its CatchHandler @ 002b9aa9 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"format=tex",10);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E(local_7f8,auStack_a48,"format=tex",10);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015ef66,0x21);
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,local_268);
                    /* try { // try from 002b9515 to 002b9599 has its CatchHandler @ 002b9b4e */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"word-regexp",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x57);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_530,auStack_a48,"word-regexp",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,"use REGEXP to match each keyword",0x20);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_268,auStack_a48,&DAT_0015ef60,6);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,local_268);
                    /* try { // try from 002b95b7 to 002b9650 has its CatchHandler @ 002b9bba */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"break-file",10);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E(local_7f8,auStack_a48,"break-file",10);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015ef87,0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_7f8,auStack_a48,&DAT_0014f0c0,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h9de4deb4bac13114E(auStack_a48,local_7f8,3);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002b9669 to 002b96d1 has its CatchHandler @ 002b9a94 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"ignore-case",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_530,auStack_a48,"ignore-case",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,&DAT_0015efa9,0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,local_268);
                    /* try { // try from 002b9702 to 002b9786 has its CatchHandler @ 002b9b3c */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE
            (local_7f8,&anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,8);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_7f8,auStack_a48,
             &anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,8);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015efd2,0x29);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_268,auStack_a48,&DAT_0015effb,6);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,local_268);
                    /* try { // try from 002b97a4 to 002b983d has its CatchHandler @ 002b9ba8 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"ignore-file",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E
            (local_530,auStack_a48,"ignore-file",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,&DAT_0015f001,0x1f);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_530,auStack_a48,&DAT_0014f0c0,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h9de4deb4bac13114E(auStack_a48,local_530,3);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002b9856 to 002b98ef has its CatchHandler @ 002b9b96 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"only-file",9);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E(local_7f8,auStack_a48,"only-file",9);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015f020,0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_7f8,auStack_a48,&DAT_0014f0c0,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h9de4deb4bac13114E(auStack_a48,local_7f8,3);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002b9908 to 002b998c has its CatchHandler @ 002b9b27 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_530,"references",10);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_530,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E(local_530,auStack_a48,"references",10);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_530,&DAT_0015f042,0x27);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_530,auStack_a48,&DAT_0014f0c0,4);
  _ZN12clap_builder7builder3arg3Arg6action17h46af598e30efdc3bE(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002b99bd to 002b9a41 has its CatchHandler @ 002b9b12 */
  _ZN12clap_builder7builder3arg3Arg3new17hfae21f3d74aba04cE(local_7f8,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17hab208f1d722cd955E(auStack_a48,local_7f8,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h17b77454ddd7d2a8E(local_7f8,auStack_a48,"width",5);
  _ZN12clap_builder7builder3arg3Arg4help17h3c60c5663295bb09E
            (auStack_a48,local_7f8,&DAT_0015f069,0x2b);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc56e1022ad2e780eE
            (local_7f8,auStack_a48,&DAT_0015effb,6);
  _ZN12clap_builder7builder7command7Command3arg17h73d0619826ecd676E(param_1,local_530,local_7f8);
  return param_1;
}