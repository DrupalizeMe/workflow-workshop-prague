Example repository for the Drupalize.Me [Mastering Git for the Drupal Developer's Work Flow](https://prague2013.drupal.org/node/538) at DrupalCon Prague. Used to demonstrate various aspects of a Features/Git workflow in Drupal 7.

Contents

*/docroot*

Contains a basic Drupal 7 install with a handfull of modules and two custom features.

*/data*

Contains an SQL dump of the starter site. Admin credentials are `admin / admin`

Database can be imported with

`gunzip < data/complete-site.sql.gz | mysql -u {username} -p -h {localhost} {databse_name}`

During the workshop we also talk about documenting your workflow, here's an example that might be helpful as a starting point for your own. [Workflow documentation](https://gist.github.com/eojthebrave/3a3eec9e6ad1e7f8f2a1)

Created by [Drupalize.Me](http://drupalize.me).
