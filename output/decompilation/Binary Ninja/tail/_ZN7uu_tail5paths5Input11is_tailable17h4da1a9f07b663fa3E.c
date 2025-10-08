
  uint64_t uu_tail::paths::Input::is_tailable::h4da1a9f07b663fa3(void* arg1)

{
    if (!(0 + -(*(arg1 + 0x18))))
        /* tailcall */
        return uu_tail::paths::path_is_tailable::h884811787df5adf9(*(arg1 + 0x20), *(arg1 + 0x28));
    
    int64_t var_20;
    uu_tail::paths::Input::resolve::h84f3e048eaef79fb(&var_20, arg1);
    
    if (var_20 != -0x8000000000000000)
        return uu_tail::paths::Input::is_tailable::_$u7b$$u7b$closure$u7d$$u7d$::hc3b7db09a978cbc3(
            &var_20);
    
    return 0;
}
