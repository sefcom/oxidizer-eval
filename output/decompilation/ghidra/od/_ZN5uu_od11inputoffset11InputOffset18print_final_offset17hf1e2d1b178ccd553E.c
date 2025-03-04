void _ZN5uu_od11inputoffset11InputOffset18print_final_offset17hf1e2d1b178ccd553E(long *param_1)

{
  undefined *local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  if ((*(char *)(param_1 + 3) != '\x03') || (*param_1 != 0)) {
    _ZN5uu_od11inputoffset11InputOffset18format_byte_offset17hff6b546ad3ee8d97E(local_20);
    local_58 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_50 = &DAT_00241a80;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_60;
    local_38 = 1;
                    /* try { // try from 001cf633 to 001cf63d has its CatchHandler @ 001cf64e */
    local_60 = local_20;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_50);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(local_20);
  }
  return;
}