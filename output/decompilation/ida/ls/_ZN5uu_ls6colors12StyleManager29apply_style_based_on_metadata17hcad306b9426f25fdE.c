__int64 __fastcall uu_ls::colors::StyleManager::apply_style_based_on_metadata(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v8; // rax

  v8 = lscolors::LsColors::style_for_path_with_metadata(*a2, a3 + 24, a4);
  return uu_ls::colors::StyleManager::apply_style(a1, a2, v8, a5, a6);
}