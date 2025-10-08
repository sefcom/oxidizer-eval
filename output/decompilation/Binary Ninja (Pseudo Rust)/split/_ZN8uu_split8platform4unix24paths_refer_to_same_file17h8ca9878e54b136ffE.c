
  fn uu_split::platform::unix::paths_refer_to_same_file::h8ca9878e54b136ff(arg1: i64, arg2: u64, arg3: i64) -> u64

{
    let mut var_150: ();
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(arg1, arg2, "-rlsrc/uu/split/src/strategy.rsb…", 1) == 0
    {
        uucore::features::fs::FileInformation::from_path::h5f490f25eeb77bb6(&var_150, arg1);
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        uucore::features::fs::FileInformation::from_file::he49478530e7a03d6(&var_150);
    }
    
    let mut var_b8: ();
    uucore::features::fs::FileInformation::from_path::h5f490f25eeb77bb6(&var_b8, arg3);
    uucore::features::fs::infos_refer_to_same_file::hd2cf53814f14dc93(&var_150, &var_b8)
}
