undefined8 _ZN13metal_crusher3fun19reanimate_gui_shell17h0e56d731a5a95ba2E(void)

{
  char cVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  cVar1 = _ZN13metal_crusher3fun13is_kde_plasma17h9e6f93de52791421E();
  if (cVar1 != '\0') {
    uVar2 = _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E("plasmashell",0xb);
    return uVar2;
  }
  return in_RAX;
}