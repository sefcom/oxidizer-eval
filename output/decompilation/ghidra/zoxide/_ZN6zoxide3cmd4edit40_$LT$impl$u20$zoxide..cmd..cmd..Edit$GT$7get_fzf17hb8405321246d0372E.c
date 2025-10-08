undefined8
_ZN6zoxide3cmd4edit40__LT_impl_u20_zoxide__cmd__cmd__Edit_GT_7get_fzf17hb8405321246d0372E
          (undefined8 param_1)

{
  undefined8 uVar1;
  char *local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  char *local_f8;
  undefined8 local_f0;
  undefined local_e8 [208];
  
  _ZN6zoxide4util3Fzf3new17hd8632d9a3c328694E(&local_1d8);
  (*(code *)PTR_memcpy_0023b550)(local_e8,&local_1c8,0xd0);
  local_f8 = local_1d8;
  local_f0 = local_1d0;
  local_1d8 = "--exact";
  local_1d0 = 7;
  local_1c8 = "--no-sort";
  local_1c0 = 9;
  local_1b8 = 
  "--bind=btab:up,ctrl-r:reload(zoxide edit reload),ctrl-d:reload(zoxide edit delete {2..}),ctrl-w:reload(zoxide edit increment {2..}),ctrl-s:reload(zoxide edit decrement {2..}),ctrl-z:ignore,double-click:ignore,enter:abort,start:reload(zoxide edit reload),tab:down"
  ;
  local_1b0 = 0x106;
  local_1a8 = "--cycle";
  local_1a0 = 7;
  local_198 = "--keep-right";
  local_190 = 0xc;
  local_188 = "--border=sharp";
  local_180 = 0xe;
  local_178 = "--border-label=  zoxide-edit  ";
  local_170 = 0x1e;
  local_168 = 
  "--header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH";
  local_160 = 0x56;
  local_158 = "--info=inline";
  local_150 = 0xd;
  local_148 = "--layout=reverse";
  local_140 = 0x10;
  local_138 = "--padding=1,0,0,0";
  local_130 = 0x11;
  local_128 = "--color=label:bold";
  local_120 = 0x12;
  local_118 = "--tabstop=1";
  local_110 = 0xb;
                    /* try { // try from 0018f05d to 0018f089 has its CatchHandler @ 0018f0a4 */
  _ZN3std7process7Command4args17hff0a33f00c195914E(&local_f8,&local_1d8);
  _ZN6zoxide4util3Fzf14enable_preview17ha30c702f7e04eaf4E(&local_f8);
  _ZN6zoxide4util3Fzf5spawn17hfa36335aedf1d058E(param_1,&local_f8);
  uVar1 = _ZN4core3ptr38drop_in_place_LT_zoxide__util__Fzf_GT_17h0a00ca9ef6ecc185E(&local_f8);
  return uVar1;
}