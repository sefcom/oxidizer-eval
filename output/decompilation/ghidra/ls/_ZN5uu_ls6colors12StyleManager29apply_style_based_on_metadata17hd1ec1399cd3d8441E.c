void __rustcall
uu_ls::colors::StyleManager::apply_style_based_on_metadata
          (undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined param_7)

{
  undefined8 uVar1;
  
  uVar1 = lscolors::LsColors::style_for_path_with_metadata(*param_2,param_3 + 0x18,param_4);
  apply_style(param_1,param_2,uVar1,param_5,param_6,param_7);
  return;
}