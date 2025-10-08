void _ZN3bat8clap_app9build_app17h78d569fc3d0211ebE(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined local_1020 [592];
  uint local_dd0;
  undefined4 local_dcc;
  undefined *local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined local_d00;
  uint uStack_cff;
  undefined2 local_cfb;
  undefined local_cf9;
  uint local_b08;
  undefined4 local_b04;
  uint local_a9c;
  undefined4 uStack_a98;
  undefined4 local_a94;
  int local_a90 [148];
  uint local_840;
  undefined4 local_83c;
  uint local_7d4;
  undefined4 uStack_7d0;
  undefined4 local_7cc;
  undefined *local_7c8;
  undefined8 uStack_7c0;
  undefined *local_7b8;
  undefined8 uStack_7b0;
  char *local_7a8;
  undefined8 uStack_7a0;
  char *local_798;
  undefined8 uStack_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 local_778;
  undefined local_770;
  uint local_76f;
  undefined2 local_76b;
  undefined local_769;
  uint local_578;
  undefined4 local_574;
  undefined8 local_568 [3];
  undefined *local_550;
  undefined8 local_548;
  undefined *local_540;
  undefined8 local_538;
  char *local_288;
  undefined8 local_280;
  char *local_278;
  undefined8 local_270;
  
  cVar2 = '\x02';
  if (param_2 != 0) {
    cVar2 = _ZN3bat3app12env_no_color17hf40fc7450e3b701fE();
    cVar2 = cVar2 * '\x02';
  }
  _ZN12clap_builder7builder7command7Command3new17h67e8791dce7e27d9E(local_a90,&DAT_00185ea3,3);
                    /* try { // try from 004a904f to 004a9053 has its CatchHandler @ 004ac3c2 */
  lVar3 = _ZN9once_cell4sync17OnceCell_LT_T_GT_15get_or_try_init17h0637f4668d0c2bc6E();
  _ZN12clap_builder7builder7command7Command7version17h14fbcb21383de15dE
            (&local_d58,local_a90,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
  _ZN12clap_builder7builder7command7Command5color17h9b1967a6a1d4a0c3E(local_a90,&local_d58,cVar2);
  (*(code *)PTR_memcpy_008074c0)(&local_d58,local_a90,700);
  uVar4 = CONCAT44(uStack_7d0,local_7d4) | 0x110000001102400;
  local_a9c = (uint)uVar4;
  uStack_a98 = (undefined4)(uVar4 >> 0x20);
  local_a94 = local_7cc;
  _ZN12clap_builder7builder7command7Command14max_term_width17hcb86384aab29d4dfE
            (local_a90,&local_d58);
  _ZN12clap_builder7builder7command7Command5about17h0b8564a6950e7dd4E
            (&local_d58,local_a90,&DAT_00185ea6,0x1a);
  _ZN12clap_builder7builder7command7Command10long_about17h350de48db2eca3a6E(local_a90,&local_d58);
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00181438,4);
                    /* try { // try from 004a912a to 004a9199 has its CatchHandler @ 004ac582 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,&DAT_00185efc,0x3b);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_d58,local_1020,&DAT_00185f37,99);
  _ZN12clap_builder7builder3arg3Arg8num_args17h37985f12b956105dE(local_1020,&local_d58);
  local_568[0] = 3;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h0f8097d3d43be33aE
            (&local_550,local_1020,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_550)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"show-all",8);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,"show-all",8);
                    /* try { // try from 004a91ee to 004a9290 has its CatchHandler @ 004ac63f */
  _ZN12clap_builder7builder3arg3Arg5alias17h4123757bd3807568E
            (local_a90,local_1020,&DAT_00185453,0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_1020,local_a90,0x41);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (local_1020,local_a90,"language",8);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_a90,local_1020,&DAT_00185f9a,0x38);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,local_a90,&DAT_00185fd2,0xa8);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_0018539d,0x15);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,&DAT_0018539d,0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,local_1020,0);
                    /* try { // try from 004a92f7 to 004a9379 has its CatchHandler @ 004ac68d */
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (local_1020,&local_d58,&DAT_00185182,7);
  local_550 = &DAT_00185182;
  local_548 = 7;
  local_540 = &DAT_00185189;
  local_538 = 5;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h27ab60e7d157d99aE
            (&local_d58,local_1020,&local_550);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,&local_d58,"notation",8);
  (*(code *)PTR_memcpy_008074c0)(&local_d58,local_1020,0x250);
  local_b08 = local_dd0 | 0x400;
  local_b04 = local_dcc;
                    /* try { // try from 004a93b6 to 004a93ec has its CatchHandler @ 004ac68d */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,&DAT_0018607a,0x2a);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_550,local_1020,&DAT_001860a4,0x79);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_550)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_001853b2,6);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_001853b2,6);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,0);
                    /* try { // try from 004a9456 to 004a94d8 has its CatchHandler @ 004ac67b */
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (local_1020,local_a90,&DAT_001851f7,0xb);
  local_550 = &DAT_001851f7;
  local_548 = 0xb;
  local_540 = &DAT_001851f0;
  local_538 = 7;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h27ab60e7d157d99aE
            (local_a90,local_1020,&local_550);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,local_a90,&DAT_00184310,8);
  (*(code *)PTR_memcpy_008074c0)(local_a90,local_1020,0x250);
  local_840 = local_dd0 | 0x400;
  local_83c = local_dcc;
                    /* try { // try from 004a9515 to 004a954b has its CatchHandler @ 004ac67b */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"How to treat binary content. (default: no-printing)",0x33);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_550,local_1020,
             "How to treat binary content. (default: no-printing)\n\nPossible values:\n  * no-printing: do not print any binary content\n  * as-text: treat binary content as normal text"
             ,0xa7);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_550)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00185358,5);
                    /* try { // try from 004a9588 to 004a9642 has its CatchHandler @ 004ac62a */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_1020,&local_d58,&DAT_00185358,5);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (&local_d58,local_1020,&DAT_00185493,6);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_1020,&local_d58,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_d58,local_1020,&DAT_00185358,5);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,4);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_d58,local_1020,"Show plain style (alias for \'--style=plain\').",0x2d);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,&local_d58,
             "Only show plain style, no decorations. This is an alias for \'--style=plain\'. When \'-p\' is used twice (\'-pp\'), it also disables automatic paging (alias for \'--style=plain --paging=never\')."
             ,0xbb);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"language",8);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_1020,local_a90,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_a90,local_1020,"language",8);
                    /* try { // try from 004a96ac to 004a96fc has its CatchHandler @ 004ac56d */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_1020,local_a90,"language",8);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_a90,local_1020,"Set the language for syntax highlighting.",0x29);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,local_a90,
             "Explicitly set the language for syntax highlighting. The language can be specified as a name (like \'C++\' or \'LaTeX\') or possible file extension (like \'cpp\', \'hpp\' or \'md\'). Use \'--list-languages\' to show all supported language names and file extensions."
             ,0xfd);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00185419,0xe);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,&DAT_00185419,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(&local_d58,local_1020,0x48);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,1);
                    /* try { // try from 004a977b to 004a97d2 has its CatchHandler @ 004ac558 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(&local_d58,local_1020,"N:M",3);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Highlight lines N through M.",0x1c);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_550,local_1020,
             "Highlight the specified line ranges with a different background color For example:\n  \'--highlight-line 40\' highlights line 40\n  \'--highlight-line 30:40\' highlights lines 30 to 40\n  \'--highlight-line :40\' highlights lines 1 to 40\n  \'--highlight-line 40:\' highlights lines 40 to the end of the file\n  \'--highlight-line 30:+10\' highlights lines 30 to 40"
             ,0x15e);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_550)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_00185489,9);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_00185489,9);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,1);
                    /* try { // try from 004a983f to 004a98ad has its CatchHandler @ 004ac615 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,local_a90,&DAT_00181e64,4);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h0f8097d3d43be33aE
            (local_a90,local_1020,local_568);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"Specify the name to display for a file.",0x27);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_a90,local_1020,
             "Specify the name to display for a file. Useful when piping data to bat from STDIN when bat does not otherwise know the filename. Note that the provided file name is also used for syntax detection."
             ,0xc4);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_550,&local_d58,local_a90)
  ;
  (*(code *)PTR_memcpy_008074c0)(local_a90,&local_550,0x2c8);
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00180bb0,4);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,&DAT_00180bb0,4);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(&local_d58,local_1020,100);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,2);
                    /* try { // try from 004a9948 to 004a999f has its CatchHandler @ 004ac543 */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (&local_d58,local_1020,&DAT_001853f3,10);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Only show lines that have been added/removed/modified.",0x36);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Only show lines that have been added/removed/modified with respect to the Git index. Use --diff-context=N to control how much context you want to see."
             ,0x96);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_001853fd,0xc);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_001853fd,0xc)
  ;
                    /* try { // try from 004a99f4 to 004a9a3b has its CatchHandler @ 004ac600 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_a90,local_1020,&DAT_001853fd,0xc);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(local_1020,local_a90,"N",1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hfacd80511d7734c8E(local_a90,local_1020);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 0x1000;
  local_dcc = local_83c;
                    /* try { // try from 004a9a78 to 004a9a93 has its CatchHandler @ 004ac600 */
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_a90,local_1020,
             "Include N lines of context around added/removed/modified lines when using \'--diff\'."
             ,0x53);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_550,&local_d58,local_a90)
  ;
  (*(code *)PTR_memcpy_008074c0)(local_a90,&local_550,0x2c8);
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"tabs",4);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,"tabs",4);
                    /* try { // try from 004a9b01 to 004a9b84 has its CatchHandler @ 004ac669 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (&local_d58,local_1020,"tabs",4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(local_1020,&local_d58,"T",1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h0952f42123b40436E(&local_d58,local_1020);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Set the tab width to T spaces.",0x1e);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Set the tab width to T spaces. Use a width of 0 to pass tabs through directly",0x4d);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_00180e94,4);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_00180e94,4);
                    /* try { // try from 004a9bd9 to 004a9c9a has its CatchHandler @ 004ac6d5 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_a90,local_1020,&DAT_00180e94,4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,local_a90,&DAT_0018252c,4);
  local_7c8 = &DAT_00180158;
  uStack_7c0 = 4;
  local_7b8 = &DAT_001850ad;
  uStack_7b0 = 5;
  local_7a8 = 
  "characterinternal error: entered unreachable code: other values for --wrap are not allowedinternal error: entered unreachable code: other values for --color are not allowedinternal error: entered unreachable code: other values for --strip-ansi are not allowedplainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present\x03[bat warning]Style \'rule\' is a subset of style \'grid\', \'rule\' will not be visible.: stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in \'\' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache --clear).\nFor more information, see:\n\n  https://github.com/sharkdp/bat#adding-new-syntaxes--language-definitions0.25.0Clearing  ... okay\nskipped (not present)\n"
  ;
  uStack_7a0 = 9;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3758d48321c0c9edE
            (local_a90,local_1020,&local_7c8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (local_1020,local_a90,&DAT_00180158,4);
  (*(code *)PTR_memcpy_008074c0)(local_a90,local_1020,0x250);
  local_840 = local_dd0 | 0x400;
  local_83c = local_dcc;
                    /* try { // try from 004a9cd7 to 004a9d0d has its CatchHandler @ 004ac6d5 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"Specify the text-wrapping mode (*auto*, never, character).",0x3a)
  ;
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Specify the text-wrapping mode (*auto*, never, character). The \'--terminal-width\' option can be used in addition to control the output width."
             ,0x8d);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_001853b8,0xf);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,&DAT_001853b8,0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(&local_d58,local_1020,0x53);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,2);
                    /* try { // try from 004a9d8f to 004a9daa has its CatchHandler @ 004ac3ad */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,
             "Truncate all lines longer than screen width. Alias for \'--wrap=never\'.",0x46);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_0018538f,0xe);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_0018538f,0xe)
  ;
                    /* try { // try from 004a9dff to 004a9e1a has its CatchHandler @ 004ac52e */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(local_a90,local_1020,"width",5);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 0x1020;
  local_dcc = local_83c;
                    /* try { // try from 004a9e57 to 004a9e84 has its CatchHandler @ 004ac52e */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h7bf76a4609ea4091E(local_a90,local_1020);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,
             "Explicitly set the width of the terminal instead of determining it automatically. If prefixed with \'+\' or \'-\', the value will be treated as an offset to the actual terminal width. See also: \'--wrap\'."
             ,199);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00185493,6);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,&DAT_00185493,6);
                    /* try { // try from 004a9ed6 to 004a9f56 has its CatchHandler @ 004ac519 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (&local_d58,local_1020,&DAT_00185493,6);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_1020,&local_d58,0x6e);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,local_1020,2);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Show line numbers (alias for \'--style=numbers\').",0x30);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Only show line numbers, no other decorations. This is an alias for \'--style=numbers\'"
             ,0x54);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_001853d9,5);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_001853d9,5);
                    /* try { // try from 004a9fab to 004aa03d has its CatchHandler @ 004ac6c3 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_a90,local_1020,&DAT_001853d9,5);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,local_a90,&DAT_00181938,4);
  local_7c8 = &DAT_00180158;
  uStack_7c0 = 4;
  local_7b8 = &DAT_001850ad;
  uStack_7b0 = 5;
  local_7a8 = 
  "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowedInvalid syntax mapping. The format of the -m/--map-syntax option is \'<glob-pattern>:<syntax-name>\'. For example: \'*.cpp:C++\'.unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowedas-textno-printinginternal error: entered unreachable code: other values for --binary are not allowedcharacterinternal error: entered unreachable code: other values for --wrap are not allowedinternal error: entered unreachable code: other values for --color are not allowedinternal error: entered unreachable code: other values for --strip-ansi are not allowedplainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present\x03[bat warning]Style \'rule\' is a subset of style \'grid\', \'rule\' will not be visible.: stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in \'\' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache --clear).\nFor more information, see:\n\n  https://github.com/sharkdp/bat#adding-new-syntaxes--language-definitions0.25.0Clearing  ... okay\nskipped (not present)\n"
  ;
  uStack_7a0 = 6;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3758d48321c0c9edE
            (local_a90,local_1020,&local_7c8);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 0x400;
  local_dcc = local_83c;
                    /* try { // try from 004aa07a to 004aa0d4 has its CatchHandler @ 004ac6c3 */
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (local_a90,local_1020,&DAT_00180158,4);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"When to use colors (*auto*, never, always).",0x2b);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Specify when to use colored output. The automatic mode only enables colors if an interactive terminal is detected - colors are automatically disabled if the output goes to a pipe.\nPossible values: *auto*, never, always."
             ,0xdb);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_0018540e,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,&DAT_0018540e,0xb);
                    /* try { // try from 004aa129 to 004aa1a7 has its CatchHandler @ 004ac654 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (&local_d58,local_1020,&DAT_00181938,4);
  local_7c8 = &DAT_001850a7;
  uStack_7c0 = 6;
  local_7b8 = &DAT_001850ad;
  uStack_7b0 = 5;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h27ab60e7d157d99aE
            (local_1020,&local_d58,&local_7c8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (&local_d58,local_1020,&DAT_001850ad,5);
  (*(code *)PTR_memcpy_008074c0)(local_1020,&local_d58,0x250);
  local_dd0 = local_b08 | 0x400;
  local_dcc = local_b04;
                    /* try { // try from 004aa1e4 to 004aa21d has its CatchHandler @ 004ac654 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_d58,local_1020,"Use italics in output (always, *never*)",0x27);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,&local_d58,
             "Specify when to use ANSI sequences for italic text in the output. Possible values: always, *never*."
             ,99);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_001853de,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_001853de,0xb)
  ;
                    /* try { // try from 004aa26f to 004aa31b has its CatchHandler @ 004ac6b1 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_a90,local_1020,&DAT_001853de,0xb);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,local_a90,&DAT_00181938,4);
  local_7c8 = &DAT_00180158;
  uStack_7c0 = 4;
  local_7b8 = &DAT_001850ad;
  uStack_7b0 = 5;
  local_7a8 = 
  "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowedInvalid syntax mapping. The format of the -m/--map-syntax option is \'<glob-pattern>:<syntax-name>\'. For example: \'*.cpp:C++\'.unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowedas-textno-printinginternal error: entered unreachable code: other values for --binary are not allowedcharacterinternal error: entered unreachable code: other values for --wrap are not allowedinternal error: entered unreachable code: other values for --color are not allowedinternal error: entered unreachable code: other values for --strip-ansi are not allowedplainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present\x03[bat warning]Style \'rule\' is a subset of style \'grid\', \'rule\' will not be visible.: stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in \'\' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache --clear).\nFor more information, see:\n\n  https://github.com/sharkdp/bat#adding-new-syntaxes--language-definitions0.25.0Clearing  ... okay\nskipped (not present)\n"
  ;
  uStack_7a0 = 6;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3758d48321c0c9edE
            (local_a90,local_1020,&local_7c8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (local_1020,local_a90,&DAT_00180158,4);
  (*(code *)PTR_memcpy_008074c0)(local_a90,local_1020,0x250);
  local_840 = local_dd0 | 0x400;
  local_83c = local_dcc;
                    /* try { // try from 004aa358 to 004aa38e has its CatchHandler @ 004ac6b1 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"When to show the decorations (*auto*, never, always).",0x35);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Specify when to use the decorations that have been specified via \'--style\'. The automatic mode only enables decorations if an interactive terminal is detected. Possible values: *auto*, never, always."
             ,199);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_001853c7,0x12);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,&DAT_001853c7,0x12);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(&local_d58,local_1020,0x66);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,2);
                    /* try { // try from 004aa410 to 004aa467 has its CatchHandler @ 004ac5eb */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (&local_d58,local_1020,&DAT_001853d9,5);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (local_1020,&local_d58,&DAT_001853de,0xb);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (&local_d58,local_1020,&DAT_001853c7,0x12);
  (*(code *)PTR_memcpy_008074c0)(local_1020,&local_d58,0x250);
  local_dd0 = local_b08 | 0x1000;
  local_dcc = local_b04;
                    /* try { // try from 004aa4a4 to 004aa4bf has its CatchHandler @ 004ac5eb */
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Alias for \'--decorations=always --color=always\'. This is useful if the output of bat is piped to another program, but you want to keep the colorization/decorations."
             ,0xa4);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_0018535d,6);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_0018535d,6);
                    /* try { // try from 004aa514 to 004aa5de has its CatchHandler @ 004ac6e7 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_a90,local_1020,&DAT_0018535d,6);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_1020,local_a90,&DAT_00185363,9);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_a90,local_1020,&DAT_00181938,4);
  local_7c8 = &DAT_00180158;
  uStack_7c0 = 4;
  local_7b8 = &DAT_001850ad;
  uStack_7b0 = 5;
  local_7a8 = 
  "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowedInvalid syntax mapping. The format of the -m/--map-syntax option is \'<glob-pattern>:<syntax-name>\'. For example: \'*.cpp:C++\'.unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowedas-textno-printinginternal error: entered unreachable code: other values for --binary are not allowedcharacterinternal error: entered unreachable code: other values for --wrap are not allowedinternal error: entered unreachable code: other values for --color are not allowedinternal error: entered unreachable code: other values for --strip-ansi are not allowedplainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present\x03[bat warning]Style \'rule\' is a subset of style \'grid\', \'rule\' will not be visible.: stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in \'\' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache --clear).\nFor more information, see:\n\n  https://github.com/sharkdp/bat#adding-new-syntaxes--language-definitions0.25.0Clearing  ... okay\nskipped (not present)\n"
  ;
  uStack_7a0 = 6;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3758d48321c0c9edE
            (local_1020,local_a90,&local_7c8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (local_a90,local_1020,&DAT_00180158,4);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 0x400;
  local_dcc = local_83c;
                    /* try { // try from 004aa61b to 004aa654 has its CatchHandler @ 004ac6e7 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_a90,local_1020,
             "Specify when to use the pager, or use `-P` to disable (*auto*, never, always).",0x4e);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,local_a90,
             "Specify when to use the pager. To disable the pager, use \'--paging=never\' or its alias,\'-P\'. To disable the pager permanently, set BAT_PAGING to \'never\'. To control which pager is used, see the \'--pager\' option. Possible values: *auto*, never, always."
             ,0xfb);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00185363,9);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_1020,&local_d58,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_d58,local_1020,&DAT_00185363,9);
                    /* try { // try from 004aa6be to 004aa709 has its CatchHandler @ 004ac504 */
  _ZN12clap_builder7builder3arg3Arg5alias17h4123757bd3807568E(local_1020,&local_d58,"no-pager",8);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,local_1020,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_1020,&local_d58,&DAT_00185363,9);
  (*(code *)PTR_memcpy_008074c0)(&local_d58,local_1020,0x250);
  local_b08 = local_dd0 | 0x1004;
  local_b04 = local_dcc;
                    /* try { // try from 004aa746 to 004aa75e has its CatchHandler @ 004ac504 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Alias for \'--paging=never\'",0x1a);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_00185409,5);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_00185409,5);
                    /* try { // try from 004aa7b0 to 004aa7e5 has its CatchHandler @ 004ac5d6 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_a90,local_1020,&DAT_00185409,5);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,local_a90,"command",7);
  (*(code *)PTR_memcpy_008074c0)(local_a90,local_1020,0x250);
  local_840 = local_dd0 | 0x1000;
  local_83c = local_dcc;
                    /* try { // try from 004aa822 to 004aa858 has its CatchHandler @ 004ac5d6 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"Determine which pager to use.",0x1d);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Determine which pager is used. This option will override the PAGER and BAT_PAGER environment variables. The default pager is \'less\'. If you provide \'--pager=builtin\', use the built-in \'minus\' pager. To control when the pager is used, see the \'--paging\' option. Example: \'--pager \"less -RF\"\'."
             ,0x123);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00185385,10);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_1020,&local_d58,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_d58,local_1020,&DAT_00185385,10)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,1);
                    /* try { // try from 004aa8da to 004aa931 has its CatchHandler @ 004ac4ef */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (&local_d58,local_1020,"glob:syntax",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,
             "Use the specified syntax for files matching the glob pattern (\'*.cpp:C++\').",0x4b);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Map a glob pattern to an existing syntax name. The glob pattern is matched on the full path and the filename. For example, to highlight *.build files with the Python syntax, use -m \'*.build:Python\'. To highlight files named \'.myignore\' with the Git Ignore syntax, use -m \'.myignore:Git Ignore\'. Note that the right-hand side is the *name* of the syntax, not a file extension."
             ,0x177);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_00185377,0xe);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,local_a90,1);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_a90,local_1020,&DAT_00185377,0xe)
  ;
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 0x1000;
  local_dcc = local_83c;
                    /* try { // try from 004aa9d5 to 004aa9f0 has its CatchHandler @ 004ac398 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,
             "Ignore extension. For example:\n  \'bat --ignored-suffix \".dev\" my_file.json.dev\' will use JSON syntax, and ignore \'.dev\'"
             ,0x77);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"theme",5);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,"theme",5);
                    /* try { // try from 004aaa45 to 004aaa98 has its CatchHandler @ 004ac4da */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (&local_d58,local_1020,"theme",5);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Set the color theme for syntax highlighting.",0x2c);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Set the theme for syntax highlighting. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme=\"...\"\' option to the configuration file or export the BAT_THEME environment variable (e.g.: export BAT_THEME=\"...\").\n\nSpecial values:\n\n  * auto: Picks a dark or light theme depending on the terminal\'s colors (default).\n          Use \'--theme-light\' and \'--theme-dark\' to customize the selected theme.\n    * auto:always: Detect the terminal\'s colors even when the output is redirected.\n    * auto:system: Detect the color scheme from the system-wide preference (macOS only).\n  * dark: Use the dark theme specified by \'--theme-dark\'.\n  * light: Use the light theme specified by \'--theme-light\'."
             ,0x2d1);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"theme-light",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,"theme-light",0xb)
  ;
                    /* try { // try from 004aaaed to 004aab5e has its CatchHandler @ 004ac5c1 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (local_a90,local_1020,"theme-light",0xb);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(local_1020,local_a90,"theme",5);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_a90,local_1020,
             "Sets the color theme for syntax highlighting used for light backgrounds.",0x48);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,local_a90,
             "Sets the theme name for syntax highlighting used when the terminal uses a light background. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme-light=\"...\" option to the configuration file or export the BAT_THEME_LIGHT environment variable (e.g. export BAT_THEME_LIGHT=\"...\")."
             ,0x13a);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"theme-dark",10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,"theme-dark",10);
                    /* try { // try from 004aabb0 to 004aac21 has its CatchHandler @ 004ac5ac */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (&local_d58,local_1020,"theme-dark",10);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(local_1020,&local_d58,"theme",5)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_d58,local_1020,
             "Sets the color theme for syntax highlighting used for dark backgrounds.",0x47);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,&local_d58,
             "Sets the theme name for syntax highlighting used when the terminal uses a dark background. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme-dark=\"...\" option to the configuration file or export the BAT_THEME_DARK environment variable (e.g. export BAT_THEME_DARK=\"...\")."
             ,0x136);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_0018536c,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_0018536c,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,2);
                    /* try { // try from 004aac8b to 004aacc1 has its CatchHandler @ 004ac45c */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"Display all supported highlighting themes.",0x2a);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,"Display a list of supported themes for syntax highlighting.",
             0x3b);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00185439,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,&DAT_00185439,0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(&local_d58,local_1020,0x73);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,2);
                    /* try { // try from 004aad43 to 004aad7c has its CatchHandler @ 004ac447 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_d58,local_1020,"Squeeze consecutive empty lines.",0x20);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,&local_d58,"Squeeze consecutive empty lines into a single empty line.",0x39)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,&DAT_00185446,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,&DAT_00185446,0xd)
  ;
                    /* try { // try from 004aadce to 004aadfb has its CatchHandler @ 004ac432 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17ha9b1cac5de7d8017E(local_a90,local_1020);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,local_a90,"Set the maximum number of consecutive empty lines to be printed."
             ,0x40);
  (*(code *)PTR_memcpy_008074c0)(&local_7c8,local_1020,0x250);
  local_578 = local_dd0 | 0x1000;
  local_574 = local_dcc;
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_001853e9,10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,&DAT_001853e9,10)
  ;
                    /* try { // try from 004aae87 to 004aaf30 has its CatchHandler @ 004ac69f */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17he0f55ba8a15cf8baE
            (&local_d58,local_1020,&DAT_001853e9,10);
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,&local_d58,&DAT_00181938,4);
  local_7c8 = &DAT_00180158;
  uStack_7c0 = 4;
  local_7b8 = &DAT_001850a7;
  uStack_7b0 = 6;
  local_7a8 = 
  "neverinternal error: entered unreachable code: other values for --paging are not allowedInvalid syntax mapping. The format of the -m/--map-syntax option is \'<glob-pattern>:<syntax-name>\'. For example: \'*.cpp:C++\'.unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowedas-textno-printinginternal error: entered unreachable code: other values for --binary are not allowedcharacterinternal error: entered unreachable code: other values for --wrap are not allowedinternal error: entered unreachable code: other values for --color are not allowedinternal error: entered unreachable code: other values for --strip-ansi are not allowedplainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present\x03[bat warning]Style \'rule\' is a subset of style \'grid\', \'rule\' will not be visible.: stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in \'\' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache --clear).\nFor more information, see:\n\n  https://github.com/sharkdp/bat#adding-new-syntaxes--language-definitions0.25.0Clearing  ... okay\nskipped (not present)\n"
  ;
  uStack_7a0 = 5;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3758d48321c0c9edE
            (&local_d58,local_1020,&local_7c8);
  _ZN12clap_builder7builder3arg3Arg13default_value17h57428a5eed539231E
            (local_1020,&local_d58,&DAT_001850ad,5);
  (*(code *)PTR_memcpy_008074c0)(&local_d58,local_1020,0x250);
  local_b08 = local_dd0 | 0x400;
  local_b04 = local_dcc;
                    /* try { // try from 004aaf6d to 004aafa3 has its CatchHandler @ 004ac69f */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Strip colors from the input (auto, always, *never*)",0x33);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_d58,local_1020,
             "Specify when to strip ANSI escape sequences from the input. The automatic mode will remove escape sequences unless the syntax highlighting language is plain text. Possible values: auto, always, *never*."
             ,0xca);
  (*(code *)PTR_memcpy_008074c0)(local_1020,&local_d58,0x250);
  local_dd0 = local_b08 | 0x1000;
  local_dcc = local_b04;
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"style",5);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,"style",5);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,1);
                    /* try { // try from 004ab047 to 004ab0ad has its CatchHandler @ 004ac597 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E
            (local_1020,local_a90,"components",10);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h0eefa7e55ed1255aE(local_a90,local_1020);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,
             "Comma-separated list of style elements to display (*default*, auto, full, plain, changes, header, header-filename, header-filesize, grid, rule, numbers, snip)."
             ,0x9f);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Configure which elements (line numbers, file headers, grid borders, Git modifications, ..) to display in addition to the file contents. The argument is a comma-separated list of components to display (e.g. \'numbers,changes,grid\') or a pre-defined style (\'full\'). To set a default style, add the \'--style=\"..\"\' option to the configuration file or export the BAT_STYLE environment variable (e.g.: export BAT_STYLE=\"..\").\n\nWhen styles are specified in multiple places, the \"nearest\" set of styles take precedence. The command-line arguments are the highest priority, followed by the BAT_STYLE environment variable, and then the configuration file. If any set of styles consists entirely of components prefixed with \"+\" or \"-\", it will modify the previous set of styles instead of replacing them.\n\nBy default, the following components are enabled:\n  changes, grid, header-filename, numbers, snip\n\nPossible values:\n\n  * default: enables recommended style components (default).\n  * full: enables all available components.\n  * auto: same as \'default\', unless the output is piped.\n  * plain: disables all available components.\n  * changes: show Git modification markers.\n  * header: alias for \'header-filename\'.\n  * header-filename: show filenames before the content.\n  * header-filesize: show file sizes before the content.\n  * grid: vertical/horizontal lines to separate side bar\n          and the header from the content.\n  * rule: horizontal lines to delimit files.\n  * numbers: show line numbers in the side bar.\n  * snip: draw separation lines between distinct line ranges."
             ,0x623);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_001853f3,10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,&DAT_001853f3,10)
  ;
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(&local_d58,local_1020,0x72);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,1);
                    /* try { // try from 004ab12f to 004ab186 has its CatchHandler @ 004ac4c5 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(&local_d58,local_1020,"N:M",3);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Only print the lines from N to M.",0x21);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,
             "Only print the specified range of lines for each file. For example:\n  \'--line-range 30:40\' prints lines 30 to 40\n  \'--line-range :40\' prints lines 1 to 40\n  \'--line-range 40:\' prints lines 40 to the end of the file\n  \'--line-range 40\' only prints line 40\n  \'--line-range 30:+10\' prints lines 30 to 40\n  \'--line-range 35::5\' prints lines 30 to 40 (line 35 with 5 lines of context)\n  \'--line-range 30:40:2\' prints lines 28 to 42 (range 30-40 with 2 lines of context)"
             ,0x1d0);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"list-languages",0xe);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,local_a90,"list-languages",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_a90,local_1020,0x4c);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,local_a90,2);
                    /* try { // try from 004ab208 to 004ab25f has its CatchHandler @ 004ac4b0 */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (local_a90,local_1020,&DAT_0018536c,0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,local_a90,"Display all supported languages.struct ThemeItem with 2 elements"
             ,0x20);
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (&local_7c8,local_1020,"Display a list of supported languages for syntax highlighting.",
             0x3e);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"unbuffered",10);
  _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_1020,&local_d58,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_d58,local_1020,"unbuffered",10);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,2);
  (*(code *)PTR_memcpy_008074c0)(&local_d58,local_1020,0x250);
  local_b08 = local_dd0 | 0x1000;
  local_b04 = local_dcc;
                    /* try { // try from 004ab31b to 004ab333 has its CatchHandler @ 004ac383 */
  _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
            (local_1020,&local_d58,
             "This option exists for POSIX-compliance reasons (\'u\' is for \'unbuffered\'). The output is always unbuffered - this option is simply ignored."
             ,0x8b);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"no-config",9);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,"no-config",9);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,2);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 4;
  local_dcc = local_83c;
                    /* try { // try from 004ab3d2 to 004ab3ed has its CatchHandler @ 004ac36e */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,"Do not use the configuration file",0x21);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"no-custom-assets",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,"no-custom-assets",0x10);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,local_1020,2);
  (*(code *)PTR_memcpy_008074c0)(local_1020,&local_d58,0x250);
  local_dd0 = local_b08 | 4;
  local_dcc = local_b04;
                    /* try { // try from 004ab48f to 004ab4aa has its CatchHandler @ 004ac359 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_d58,local_1020,"Do not load custom assets",0x19);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_550,local_a90,&local_d58)
  ;
  (*(code *)PTR_memcpy_008074c0)(local_a90,&local_550,0x2c8);
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"completion",10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,"completion",10);
                    /* try { // try from 004ab518 to 004ab5d7 has its CatchHandler @ 004ac49b */
  _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(&local_d58,local_1020,"SHELL",5)
  ;
  local_7c8 = &DAT_00181d08;
  uStack_7c0 = 4;
  local_7b8 = &DAT_001817d8;
  uStack_7b0 = 4;
  local_7a8 = "ps1";
  uStack_7a0 = 3;
  local_798 = "zsh";
  uStack_790 = 3;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2ce8401e13ded5d6E
            (local_1020,&local_d58,&local_7c8);
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_d58,local_1020,
             "Show shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]",
             0x52);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_550,local_a90,&local_d58)
  ;
  (*(code *)PTR_memcpy_008074c0)(local_a90,&local_550,0x2c8);
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"config-file",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,"config-file",0xb);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,local_1020,2);
                    /* try { // try from 004ab65d to 004ab693 has its CatchHandler @ 004ac486 */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (local_1020,&local_d58,"list-languages",0xe);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (&local_d58,local_1020,&DAT_0018536c,0xb);
  (*(code *)PTR_memcpy_008074c0)(local_1020,&local_d58,0x250);
  local_dd0 = local_b08 | 4;
  local_dcc = local_b04;
                    /* try { // try from 004ab6ce to 004ab6e9 has its CatchHandler @ 004ac486 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,"Show path to the configuration file.",0x24);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"generate-config-file",0x14);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,local_a90,"generate-config-file",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,2);
                    /* try { // try from 004ab756 to 004ab78c has its CatchHandler @ 004ac471 */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (local_1020,local_a90,"list-languages",0xe);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hb284045f63e3df61E
            (local_a90,local_1020,&DAT_0018536c,0xb);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 4;
  local_dcc = local_83c;
                    /* try { // try from 004ab7c7 to 004ab7e2 has its CatchHandler @ 004ac471 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,"Generates a default configuration file.",0x27);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"config-dir",10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,"config-dir",10);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,local_1020,2);
  (*(code *)PTR_memcpy_008074c0)(local_1020,&local_d58,0x250);
  local_dd0 = local_b08 | 4;
  local_dcc = local_b04;
                    /* try { // try from 004ab884 to 004ab89f has its CatchHandler @ 004ac344 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,"Show bat\'s configuration directory.",0x23);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"cache-dir",9);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,local_a90,"cache-dir",9);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,2);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 4;
  local_dcc = local_83c;
                    /* try { // try from 004ab941 to 004ab95c has its CatchHandler @ 004ac32f */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,"Show bat\'s cache directory.",0x1b);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"diagnostic",10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(local_1020,&local_d58,"diagnostic",10);
                    /* try { // try from 004ab9b1 to 004ab9cc has its CatchHandler @ 004ac41d */
  _ZN12clap_builder7builder3arg3Arg5alias17h4123757bd3807568E
            (&local_d58,local_1020,"diagnostics",0xb);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_1020,&local_d58,2);
  (*(code *)PTR_memcpy_008074c0)(&local_d58,local_1020,0x250);
  local_b08 = local_dd0 | 0x1000;
  local_b04 = local_dcc;
                    /* try { // try from 004aba23 to 004aba3b has its CatchHandler @ 004ac41d */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (local_1020,&local_d58,"Show diagnostic information for bug reports.",0x2c);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_d58,local_a90,local_1020)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"acknowledgements",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,local_a90,"acknowledgements",0x10);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,local_1020,2);
  (*(code *)PTR_memcpy_008074c0)(local_1020,local_a90,0x250);
  local_dd0 = local_840 | 0x1000;
  local_dcc = local_83c;
                    /* try { // try from 004abad7 to 004abaf2 has its CatchHandler @ 004ac31a */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_7c8,local_1020,"Show acknowledgements.",0x16);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(local_a90,&local_d58,&local_7c8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,&DAT_00185427,0x12);
  _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
            (local_1020,&local_d58,&DAT_00185427,0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,local_1020,2);
  (*(code *)PTR_memcpy_008074c0)(local_1020,&local_d58,0x250);
  local_dd0 = local_b08 | 0x1000;
  local_dcc = local_b04;
                    /* try { // try from 004abb96 to 004abbb1 has its CatchHandler @ 004ac305 */
  _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
            (&local_d58,local_1020,"Sets terminal title to filenames when using a pager.",0x34);
  _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE(&local_550,local_a90,&local_d58)
  ;
                    /* try { // try from 004abbcf to 004abbf0 has its CatchHandler @ 004ac408 */
  _ZN3std2fs8metadata17h69cc250c0e4ebc3fE(local_a90);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h0c3c97850cfa6031E
            (local_a90);
  puVar1 = PTR_memcpy_008074c0;
  if (local_a90[0] == 2) {
    (*(code *)PTR_memcpy_008074c0)(local_1020,&local_550,0x2c8);
    _ZN12clap_builder7builder7command7Command3new17h67e8791dce7e27d9E(local_a90,&DAT_00185063,5);
    (*(code *)puVar1)(&local_d58,local_a90,700);
    local_a9c = local_7d4 | 0x800000;
                    /* try { // try from 004abc69 to 004abc84 has its CatchHandler @ 004ac2be */
    _ZN12clap_builder7builder7command7Command5about17h0b8564a6950e7dd4E
              (local_a90,&local_d58,"Modify the syntax-definition and theme cache",0x2c);
    _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"build",5);
    _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_7c8,&local_d58,"build",5);
    _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(&local_d58,&local_7c8,0x62);
    _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_7c8,&local_d58,2);
                    /* try { // try from 004abcef to 004abd2b has its CatchHandler @ 004ac2f0 */
    _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
              (&local_d58,&local_7c8,"Initialize (or update) the syntax/theme cache.",0x2e);
    _ZN12clap_builder7builder3arg3Arg9long_help17h083fb45089f9692fE
              (&local_7c8,&local_d58,
               "Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory)."
               ,0x7a);
                    /* try { // try from 004abd2c to 004abd48 has its CatchHandler @ 004ac2b6 */
    _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE
              (&local_d58,local_a90,&local_7c8);
    _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"clear",5);
    _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_7c8,local_a90,"clear",5);
    _ZN12clap_builder7builder3arg3Arg5short17h5b994f24c0ff1dc4E(local_a90,&local_7c8,99);
    _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_7c8,local_a90,2);
                    /* try { // try from 004abdb3 to 004abdce has its CatchHandler @ 004ac2a1 */
    _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
              (&local_288,&local_7c8,"Remove the cached syntax definitions and themes.",0x30);
                    /* try { // try from 004abdcf to 004abdeb has its CatchHandler @ 004ac299 */
    _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE
              (local_a90,&local_d58,&local_288);
    uStack_d10 = 1;
    local_d08 = 0;
    local_d58 = (undefined *)0x0;
    uStack_d50 = 8;
    local_d00 = 0;
    uStack_cff = uStack_cff & 0xffffff00;
    local_d48 = 0;
    uStack_d40 = 0;
    local_d38 = 8;
    uStack_d30 = 0;
    uStack_d28 = 0;
    uStack_d20 = 8;
    local_d18 = 0;
    _ZN12clap_builder7builder9arg_group8ArgGroup2id17hfb63df85da8821fbE(&local_7c8,&local_d58);
    local_288 = "build";
    local_280 = 5;
    local_278 = "clear";
    local_270 = 5;
                    /* try { // try from 004abe9d to 004abeb4 has its CatchHandler @ 004ac284 */
    _ZN12clap_builder7builder9arg_group8ArgGroup4args17h95ccf77517ae9464E
              (&local_d58,&local_7c8,&local_288);
    local_d00 = 1;
    local_7c8 = local_d58;
    uStack_7c0 = uStack_d50;
    local_7b8 = (undefined *)local_d48;
    uStack_7b0 = uStack_d40;
    local_7a8 = (char *)local_d38;
    uStack_7a0 = uStack_d30;
    local_798 = (char *)uStack_d28;
    uStack_790 = uStack_d20;
    local_788 = (undefined4)local_d18;
    uStack_784 = local_d18._4_4_;
    uStack_780 = (undefined4)uStack_d10;
    uStack_77c = uStack_d10._4_4_;
    local_778 = local_d08;
    local_770 = 1;
    local_76f = uStack_cff;
    local_76b = local_cfb;
    local_769 = local_cf9;
                    /* try { // try from 004abf59 to 004abf75 has its CatchHandler @ 004ac27c */
    _ZN12clap_builder7builder7command7Command5group17he3cac4b8560c953bE
              (&local_d58,local_a90,&local_7c8);
    _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"source",6);
    _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_7c8,local_a90,"source",6);
                    /* try { // try from 004abfb0 to 004ac001 has its CatchHandler @ 004ac3e9 */
    _ZN12clap_builder7builder3arg3Arg8requires17h285ee0176c9835f6E(local_a90,&local_7c8);
    _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(&local_7c8,local_a90,"dir",3);
    _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
              (&local_288,&local_7c8,"Use a different directory to load syntaxes and themes from.",
               0x3b);
                    /* try { // try from 004ac002 to 004ac01e has its CatchHandler @ 004ac274 */
    _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE
              (local_a90,&local_d58,&local_288);
    _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"target",6);
    _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_7c8,&local_d58,"target",6);
                    /* try { // try from 004ac059 to 004ac0aa has its CatchHandler @ 004ac3d7 */
    _ZN12clap_builder7builder3arg3Arg8requires17h285ee0176c9835f6E(&local_d58,&local_7c8);
    _ZN12clap_builder7builder3arg3Arg10value_name17h660bca0c7418db71E(&local_7c8,&local_d58,"dir",3)
    ;
    _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
              (&local_288,&local_7c8,
               "Use a different directory to store the cached syntax and theme set.",0x43);
                    /* try { // try from 004ac0ab to 004ac0c7 has its CatchHandler @ 004ac26c */
    _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE
              (&local_d58,local_a90,&local_288);
    _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(local_a90,"blank",5);
    _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E(&local_7c8,local_a90,"blank",5);
    _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(local_a90,&local_7c8,2);
                    /* try { // try from 004ac11a to 004ac14a has its CatchHandler @ 004ac2db */
    _ZN12clap_builder7builder3arg3Arg8requires17h285ee0176c9835f6E(&local_7c8,local_a90);
    _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
              (&local_288,&local_7c8,
               "Create completely new syntax and theme sets (instead of appending to the default sets)."
               ,0x57);
                    /* try { // try from 004ac14b to 004ac167 has its CatchHandler @ 004ac264 */
    _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE
              (local_a90,&local_d58,&local_288);
    _ZN12clap_builder7builder3arg3Arg3new17h0cedc99a5a4b2d9bE(&local_d58,"acknowledgements",0x10);
    _ZN12clap_builder7builder3arg3Arg4long17he78e7877abf06eb1E
              (&local_7c8,&local_d58,"acknowledgements",0x10);
    _ZN12clap_builder7builder3arg3Arg6action17hc38daab2fb3140bdE(&local_d58,&local_7c8,2);
                    /* try { // try from 004ac1ba to 004ac1ea has its CatchHandler @ 004ac2c6 */
    _ZN12clap_builder7builder3arg3Arg8requires17h285ee0176c9835f6E(&local_7c8,&local_d58);
    _ZN12clap_builder7builder3arg3Arg4help17h0e3af94f24af5b7eE
              (&local_288,&local_7c8,"Build acknowledgements.bin.",0x1b);
                    /* try { // try from 004ac1eb to 004ac207 has its CatchHandler @ 004ac25c */
    _ZN12clap_builder7builder7command7Command3arg17h42064b8ec4a5569fE
              (&local_d58,local_a90,&local_288);
    _ZN12clap_builder7builder7command7Command10subcommand17h4a7d6e751cc8e1cbE
              (local_a90,local_1020,&local_d58);
    _ZN12clap_builder7builder7command7Command15after_long_help17h41aa0aca446676ceE
              (param_1,local_a90);
  }
  else {
    (*(code *)PTR_memcpy_008074c0)(param_1,&local_550,0x2c8);
  }
  return;
}