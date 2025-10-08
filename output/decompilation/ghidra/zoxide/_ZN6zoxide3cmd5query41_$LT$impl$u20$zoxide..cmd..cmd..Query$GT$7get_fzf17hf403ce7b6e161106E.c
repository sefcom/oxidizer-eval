undefined8
_ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_7get_fzf17hf403ce7b6e161106E
          (undefined8 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long local_1f0;
  undefined8 local_1e8;
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
  char *local_f8;
  undefined8 local_f0;
  undefined local_e8 [208];
  
  _ZN6zoxide4util3Fzf3new17hd8632d9a3c328694E(&local_1d8);
  uVar2 = local_1d0;
  pcVar1 = local_1d8;
  (*(code *)PTR_memcpy_0023b550)(local_e8,&local_1c8,0xd0);
  local_f8 = pcVar1;
  local_f0 = uVar2;
                    /* try { // try from 001905d2 to 00190742 has its CatchHandler @ 0019075d */
  _ZN6zoxide6config8fzf_opts17ha32a17230c4dd2c5E(&local_1f0);
  if (local_1f0 == -0x8000000000000000) {
    _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h447bd1d20a159d05E
              (0x8000000000000000,local_1e8);
    local_1d8 = "--exact";
    local_1d0 = 7;
    local_1c8 = "--no-sort";
    local_1c0 = 9;
    local_1b8 = "--bind=ctrl-z:ignore,btab:up,tab:down";
    local_1b0 = 0x25;
    local_1a8 = "--cycle";
    local_1a0 = 7;
    local_198 = "--keep-right";
    local_190 = 0xc;
    local_188 = "--border=sharp";
    local_180 = 0xe;
    local_178 = "--height=45%";
    local_170 = 0xc;
    local_168 = "--info=inline";
    local_160 = 0xd;
    local_158 = "--layout=reverse";
    local_150 = 0x10;
    local_148 = "--tabstop=1";
    local_140 = 0xb;
    local_138 = "--exit-0";
    local_130 = 8;
    _ZN3std7process7Command4args17hce1ae4dd52fdb449E(&local_f8,&local_1d8);
    _ZN6zoxide4util3Fzf14enable_preview17ha30c702f7e04eaf4E(&local_f8);
  }
  else {
    _ZN3std7process7Command3env17h6580f87df4ffdc4fE(&local_f8,&local_1f0);
  }
  _ZN6zoxide4util3Fzf5spawn17hfa36335aedf1d058E(param_1,&local_f8);
  uVar2 = _ZN4core3ptr38drop_in_place_LT_zoxide__util__Fzf_GT_17h0a00ca9ef6ecc185E(&local_f8);
  return uVar2;
}