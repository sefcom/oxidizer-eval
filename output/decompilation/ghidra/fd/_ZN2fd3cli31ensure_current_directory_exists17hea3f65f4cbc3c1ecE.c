undefined8 _ZN2fd3cli31ensure_current_directory_exists17hea3f65f4cbc3c1ecE(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  cVar1 = _ZN2fd10filesystem21is_existing_directory17h6c4a6eed8c6886fcE
                    ("./cannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero type"
                     ,2);
  if (cVar1 != '\0') {
    return 0;
  }
  local_30 = &PTR_s_Could_not_retrieve_current_direc_00502130;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  uVar2 = _ZN6anyhow9__private10format_err17hb7ed131eb83ec9a9E(&local_30);
  return uVar2;
}