void __rustcall uu_tsort::Graph::add_node(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_28,param_1,param_2,param_3);
  local_48 = local_20;
  uStack_40 = uStack_18;
  local_38 = local_10;
  uStack_34 = uStack_c;
  uStack_30 = uStack_8;
  uStack_2c = uStack_4;
  local_50 = local_28;
  std::collections::hash::map::Entry<K,V>::or_insert_with(&local_50);
  return;
}