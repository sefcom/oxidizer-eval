void __rustcall
uu_ls::colors::StyleManager::apply_style_based_on_dir_entry
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = lscolors::LsColors::style_for(*param_2,param_3);
  apply_style(param_1,param_2,uVar1,param_4,param_5,param_6);
  return;
}