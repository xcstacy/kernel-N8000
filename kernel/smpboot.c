  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>History for kernel/smpboot.c - DerTeufel/android_kernel_samsung_smdk4412 · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="xhr-socket" href="/_sockets">
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="pDdxez60T/sKr5Eo+K/KG0nzmNPH6UVIEx5xYYQDLSI=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-3dae77b1344d5de8d1c932d28c3904033713ed8b.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-8700f58b37c27f7b329397f20a75deb70a514871.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-c5555a5a962554bd1e804776ae4fd4f37380681f.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-3eee932f7d03a83e9ea5a0f591f5db485e1abc05.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="65ac304df8e204394f40f06a0ee35d0a">

          <meta property="og:title" content="android_kernel_samsung_smdk4412"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/DerTeufel/android_kernel_samsung_smdk4412"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/b3130ff718ddba31d88781e0c22ae530?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="android_kernel_samsung_smdk4412 - Samsung Galaxy S III (GT-I9300)"/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="DerTeufel/android_kernel_samsung_smdk4412"/>

    <meta name="description" content="android_kernel_samsung_smdk4412 - Samsung Galaxy S III (GT-I9300)" />

      <meta name="robots" content="noindex, nofollow">
  <link href="https://github.com/DerTeufel/android_kernel_samsung_smdk4412/commits/c4d5d217fa018f13c70020756f9dbea69487b306.atom" rel="alternate" title="Recent Commits to android_kernel_samsung_smdk4412:c4d5d217fa018f13c70020756f9dbea69487b306" type="application/atom+xml" />

  </head>


  <body class="logged_out  linux vis-public fork env-production  ">
    <div id="wrapper">

      

      
      
      

      
      <div class="header header-logged-out">
  <div class="container clearfix">

      <a class="header-logo-wordmark" href="https://github.com/">Github</a>

    <div class="header-actions">
        <a class="button primary" href="https://github.com/signup">Sign up for free</a>
      <a class="button" href="https://github.com/login?return_to=%2FDerTeufel%2Fandroid_kernel_samsung_smdk4412%2Fcommits%2Fc4d5d217fa018f13c70020756f9dbea69487b306%2Fkernel%2Fsmpboot.c">Sign in</a>
    </div>

      <ul class="top-nav">
          <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
        <li class="search"><a href="https://github.com/search">Search</a></li>
        <li class="features"><a href="https://github.com/features">Features</a></li>
          <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      </ul>

  </div>
</div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              


<ul class="pagehead-actions">



    <li>
      <a href="/login?return_to=%2FDerTeufel%2Fandroid_kernel_samsung_smdk4412"
        class="minibutton js-toggler-target star-button entice tooltipped upwards"
        title="You must be signed in to use this feature" rel="nofollow">
        <span class="mini-icon mini-icon-star"></span>Star
      </a>
      <a class="social-count js-social-count" href="/DerTeufel/android_kernel_samsung_smdk4412/stargazers">
        0
      </a>
    </li>
    <li>
      <a href="/login?return_to=%2FDerTeufel%2Fandroid_kernel_samsung_smdk4412"
        class="minibutton js-toggler-target fork-button entice tooltipped upwards"
        title="You must be signed in to fork a repository" rel="nofollow">
        <span class="mini-icon mini-icon-fork"></span>Fork
      </a>
      <a href="/DerTeufel/android_kernel_samsung_smdk4412/network" class="social-count">
        136
      </a>
    </li>
</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/DerTeufel" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">DerTeufel</span>
                  </a></span> /
                <strong><a href="/DerTeufel/android_kernel_samsung_smdk4412" class="js-current-repository">android_kernel_samsung_smdk4412</a></strong>
                  <span class="fork-flag">
                    <span class="text">forked from <a href="/CyanogenMod/android_kernel_samsung_smdk4412">CyanogenMod/android_kernel_samsung_smdk4412</a></span>
                  </span>
              </h1>
            </div>

            
  <ul class="tabs">
      <li class="pulse-nav"><a href="/DerTeufel/android_kernel_samsung_smdk4412/pulse" highlight="pulse" rel="nofollow"><span class="mini-icon mini-icon-pulse"></span></a></li>
    <li><a href="/DerTeufel/android_kernel_samsung_smdk4412" class="selected" highlight="repo_source repo_downloads repo_commits repo_tags repo_branches">Code</a></li>
    <li><a href="/DerTeufel/android_kernel_samsung_smdk4412/network" highlight="repo_network">Network</a></li>
    <li><a href="/DerTeufel/android_kernel_samsung_smdk4412/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>




    <li><a href="/DerTeufel/android_kernel_samsung_smdk4412/graphs" highlight="repo_graphs repo_contributors">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/DerTeufel/android_kernel_samsung_smdk4412/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="">
        <span class="mini-icon mini-icon-tree"></span>
        <i>tree:</i>
        <span class="js-select-button">c4d5d217fa</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/cm-10.1/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1" rel="nofollow" title="cm-10.1">cm-10.1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/cm-10.1-experimental/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1-experimental" rel="nofollow" title="cm-10.1-experimental">cm-10.1-experimental</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/dev/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="dev" rel="nofollow" title="dev">dev</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/dev2/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="dev2" rel="nofollow" title="dev2">dev2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/devil/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="devil" rel="nofollow" title="devil">devil</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/dualboot2/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="dualboot2" rel="nofollow" title="dualboot2">dualboot2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/ics/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ics" rel="nofollow" title="ics">ics</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/jellybean/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jellybean" rel="nofollow" title="jellybean">jellybean</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/jellybean-stable/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jellybean-stable" rel="nofollow" title="jellybean-stable">jellybean-stable</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/linux-3.0.15/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="linux-3.0.15" rel="nofollow" title="linux-3.0.15">linux-3.0.15</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/linux-3.0.y/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="linux-3.0.y" rel="nofollow" title="linux-3.0.y">linux-3.0.y</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/mr1-staging/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="mr1-staging" rel="nofollow" title="mr1-staging">mr1-staging</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/n8000/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="n8000" rel="nofollow" title="n8000">n8000</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/release/kernel/smpboot.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="release" rel="nofollow" title="release">release</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/DerTeufel/android_kernel_samsung_smdk4412" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/DerTeufel/android_kernel_samsung_smdk4412/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">14</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          

<div id="compare">
  <div class="breadcrumb">
    History for <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/c4d5d217fa018f13c70020756f9dbea69487b306" class="js-slide-to" data-branch="c4d5d217fa018f13c70020756f9dbea69487b306" data-direction="back" itemscope="url" rel="nofollow"><span itemprop="title">android_kernel_samsung_smdk4412</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/DerTeufel/android_kernel_samsung_smdk4412/commits/c4d5d217fa018f13c70020756f9dbea69487b306/kernel" class="js-slide-to" data-branch="c4d5d217fa018f13c70020756f9dbea69487b306" data-direction="back" itemscope="url" rel="nofollow"><span itemprop="title">kernel</span></a></span><span class="separator"> / </span><strong class="final-path">smpboot.c</strong>
  </div>

  


    <div class="js-navigation-container js-active-navigation-container" data-navigation-scroll="page">

      <h3 class="commit-group-heading">Apr 17, 2013</h3>

      <ol class="commit-group">
          <li class="commit commit-group-item js-navigation-item js-details-container">
            <img class="gravatar" height="36" src="https://secure.gravatar.com/avatar/655933b9bf9ea16efc37f6cf1438efaa?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="36" />
            <p class="commit-title  js-pjax-commit-title">
              <a href="/DerTeufel/android_kernel_samsung_smdk4412/commit/c4d5d217fa018f13c70020756f9dbea69487b306" class="message">backport: smp: patches from mainline 3.5 to hopefully help with hotplug</a>
            <span class="hidden-text-expander inline"><a href="#" class="js-details-target">…</a></span>
            </p>
              <div class="commit-desc"><pre>Thomas Gleixner's generic-idle patches:

smp: Add task_struct argument to __cpu_up()
Preparatory patch to make the idle thread allocation for secondary
cpus generic.
<a href="http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=8239c25f47d2b318156993b15f33900a86ea5e17">http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=8239c25f47d2b318156993b15f33900a86ea5e17</a>

smp: Add generic smpboot facility
Start a new file, which will hold SMP and CPU hotplug related generic
infrastructure.
<a href="http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=38498a67aa2cf8c80754b8d304bfacc10bc582b5">http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=38498a67aa2cf8c80754b8d304bfacc10bc582b5</a>

smp: Provide generic idle thread allocation
All SMP architectures have magic to fork the idle task and to store it
for reusage when cpu hotplug is enabled. Provide a generic
infrastructure for it.
Create/reinit the idle thread for the cpu which is brought up in the
generic code and hand the thread pointer to the architecture code via
__cpu_up().
Note, that fork_idle() is called via a workqueue, because this
guarantees that the idle thread does not get a reference to a user
space VM. This can happen when the boot process did not bring up all
possible cpus and a later cpu_up() is initiated via the sysfs
interface. In that case fork_idle() would be called in the context of
the user space task and take a reference on the user space VM.
<a href="http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=29d5e0476e1c4a513859e7858845ad172f560389">http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=29d5e0476e1c4a513859e7858845ad172f560389</a>

arm: Use generic idle thread allocation
<a href="http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=84ec6d5796e095e2f8698bd2b5d33849ed26d9e2">http://git.kernel.org/?p=linux/kernel/git/tip/tip.git;a=commit;h=84ec6d5796e095e2f8698bd2b5d33849ed26d9e2</a>

ported from this commit:
<a href="https://github.com/motley-git/kernel-Nexus4/commit/792a9656ceb8212b7cc2efc5091f3bb39cc1aafd#diff-7">https://github.com/motley-git/kernel-Nexus4/commit/792a9656ceb8212b7cc2efc5091f3bb39cc1aafd#diff-7</a></pre></div>
            <div class="commit-meta">

              <div class="commit-links">
                <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="c4d5d217fa018f13c70020756f9dbea69487b306" data-copied-hint="copied!" title="Copy SHA"><span class="mini-icon mini-icon-clipboard"></span></span>

                <a href="/DerTeufel/android_kernel_samsung_smdk4412/commit/c4d5d217fa018f13c70020756f9dbea69487b306#kernel/smpboot.c" class="gobutton ">
                  <span class="sha">c4d5d217fa<span class="mini-icon mini-icon-arr-right-mini"></span></span>
                </a>

                <a href="/DerTeufel/android_kernel_samsung_smdk4412/tree/c4d5d217fa018f13c70020756f9dbea69487b306/kernel/smpboot.c" class="browse-button" title="Browse the code at this point in the history" rel="nofollow">Browse code <span class="mini-icon mini-icon-arr-right"></span></a>
              </div>

              <div class="authorship">
                <span class="author-name"><span rel="author">Thomas Gleixner</span></span>
                authored <time class="js-relative-date" datetime="2012-12-28T23:09:24-08:00" title="2012-12-28 23:09:24">December 28, 2012</time>

                  <span class="committer">
                    <span class="mini-icon mini-icon-arr-right"></span> <span class="author-name"><a href="/DerTeufel" rel="committer">DerTeufel</a></span>
                    committed <time class="js-relative-date" datetime="2013-04-17T13:57:14-07:00" title="2013-04-17 13:57:14">April 17, 2013</time>
                  </span>
              </div>
            </div>
          </li>
      </ol>

    </div>



    

</div>

        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="1.35051s from fe4.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/DerTeufel/android_kernel_samsung_smdk4412/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-icon mega-icon-normalscreen"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="mini-icon mini-icon-brightness"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='1.35156' data-host='fe4'></span>
    
  </body>
</html>

