__int64 __fastcall uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v7; // rax

  v7 = lscolors::LsColors::style_for(*a2, a3);
  return uu_ls::colors::StyleManager::apply_style(a1, a2, v7, a4, a5);
}