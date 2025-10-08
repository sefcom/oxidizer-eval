void _ZN2rg5flags6hiargs6HiArgs6stdout17h4f38f4c31b97dea6E(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = 0x1000203 >> ((*(byte *)(param_2 + 0x395) & 3) << 3);
  if (*(char *)(param_2 + 0x392) == '\0') {
    if (*(char *)(param_2 + 0x379) == '\0') goto LAB_00350933;
  }
  else if (*(char *)(param_2 + 0x392) != '\x01') {
LAB_00350933:
    (*(code *)PTR__ZN8grep_cli3wtr21stdout_buffered_block17hb9c139ea7985e825E_00527168)
              (param_1,uVar1 & 0xff);
    return;
  }
  (*(code *)PTR__ZN8grep_cli3wtr20stdout_buffered_line17h76abfb9e49467d36E_00527160)
            (param_1,uVar1 & 0xff);
  return;
}