__int64 __fastcall uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v9; // rax

  v9 = lscolors::LsColors::style_for(*a2, a3);
  return uu_ls::colors::StyleManager::apply_style(a1, (__int64)a2, v9, a4, a5, a6);
}
