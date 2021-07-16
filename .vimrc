" /usr/share/nvim/sysinit.vim
"
"coc_global_extensions = [
"	\ 'coc-css',
"	\ 'coc-diagnostic',
"	\ 'coc-docker',
"	\ 'coc-eslint',
"	\ 'coc-explorer',
"	\ 'coc-flutter-tools',
"	\ 'coc-gitignore',
"	\ 'coc-html',
"	\ 'coc-import-cost',
"	\ 'coc-jest',
"	\ 'coc-json',
"	\ 'coc-lists',
"	\ 'coc-prettier',
"	\ 'coc-prisma',
"	\ 'coc-pyright',
"	\ 'coc-python',
"	\ 'coc-snippets',
"	\ 'coc-sourcekit',
"	\ 'coc-stylelint',
"	\ 'coc-syntax',
"	\ 'coc-tailwindcss',
"	\ 'coc-tasks',
"	\ 'coc-translator',
"	\ 'coc-tslint-plugin',
"	\ 'coc-tsserver',
"	\ 'coc-vetur',
"	\ 'coc-vimlsp',
"	\ 'coc-yaml',
"	\ 'coc-yank',
"	\ 'https://github.com/rodrigore/coc-tailwind-intellisense']
	
call plug#begin()
Plug 'junegunn/fzf.vim'
Plug 'kevinhwang91/rnvimr'
Plug 'brooth/far.vim'
Plug 'mg979/vim-xtabline'
"Plug 'neoclide/coc.nvim', {'branch': 'release'}
" Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
" Plug 'ycm-core/YouCompleteMe', { 'do': './install.py' }
Plug 'terryma/vim-multiple-cursors'
Plug 'tpope/vim-surround'
Plug 'junegunn/vim-easy-align'
Plug 'liuchengxu/vista.vim'
" Undo Tree
Plug 'mbbill/undotree'
call plug#end()

let mapleader=" "
set autochdir

" Open the vimrc file anytime
noremap <LEADER>rc :e ~/.config/nvim/init.vim<CR>
noremap <LEADER>rv :e .nvimrc<CR>
" Adjacent duplicate words
noremap <LEADER>dw /\(\<\w\+\>\)\_s*\1

" ===
" === Editor behavior
" ===
set exrc
set secure
set number
set relativenumber
set cursorline
set hidden
set noexpandtab
set tabstop=2
set shiftwidth=2
set softtabstop=2
set autoindent
set list
set listchars=tab:\|\ ,trail:▫
set scrolloff=4
set ttimeoutlen=0
set notimeout
set viewoptions=cursor,folds,slash,unix
set wrap
set tw=0
set indentexpr=
set foldmethod=indent
set foldlevel=99
set foldenable
set formatoptions-=tc
set splitright
set splitbelow
set noshowmode
set showcmd
set wildmenu
set ignorecase
set smartcase
set shortmess+=c
"set inccommand=split
set completeopt=longest,noinsert,menuone,noselect,preview
set ttyfast "should make scrolling faster
set lazyredraw "same as above
set visualbell

nnoremap <leader>n :NERDTreeFocus<CR>
nnoremap <C-n> :NERDTree<CR>
nnoremap <C-t> :NERDTreeToggle<CR>
nnoremap <C-f> :NERDTreeFind<CR>

let g:fzf_preview_window = 'right:60%'
let g:fzf_commits_log_options = '--graph --color=always --format="%C(auto)%h%d %s %C(black)%C(bold)%cr"'

let g:fzf_layout = { 'window': { 'width': 0.9, 'height': 0.8 } }
